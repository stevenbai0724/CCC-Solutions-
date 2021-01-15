#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    cin>>n>>m;
    vector<vector<pair<int, int>>>end(n+1, vector<pair<int, int>>(m+1));
    vector<vector<char>>arr(n+1, vector<char>(m+1));
    vector<vector<bool>>cam(n+1, vector<bool>(m+1));
    vector<vector<bool>>vis(n+1, vector<bool>(m+1));
    vector<vector<int>>dis(n+1, vector<int>(m+1, 1e9));
    map<char, pair<int, int>>mp;
    mp['D'] = {1,0};
    mp['U'] = {-1,0};
    mp['L'] = {0,-1};
    mp['R'] = {0,1};
    string look = "DURL";
    vector<int>X{1,-1,0,0};
    vector<int>Y{0,0,-1,1};
    queue<pair<int, int>>q;
    queue<pair<int, int>>belt;
    pair<int, int>start;
    for(int i=1;i<=n;i++){
        string s;cin>>s;
        for(int j=1;j<=m;j++){
            arr[i][j] = s[j-1];
            if(s[j-1]=='W' || s[j-1]=='.')continue;
            else if(s[j-1]=='S')start = {i,j};
            else if(s[j-1]=='C')q.push({i,j});
            else belt.push({i,j});
        }
    }
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        cam[x][y] = true;
        q.pop();
        for(int i=0;i<4;i++){
            int newx = x, newy = y;
            while(true){
                newx+=X[i];
                newy+=Y[i];
                if(arr[newx][newy]=='W')break;
                cam[newx][newy] = true;
            }
        }
    }
    if(cam[start.first][start.second]){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(arr[i][j]=='.')cout<<-1<<"\n";
            }
        }
        return 0;
    }
    while(!belt.empty()){
        vector<vector<bool>>bVis(n+1, vector<bool>(m+1));
        int x = belt.front().first;
        int y = belt.front().second;
        bVis[x][y] = true;
        int newx = x+mp[arr[x][y]].first;
        int newy = y+mp[arr[x][y]].second;
        belt.pop();
        while(true){
            if(bVis[newx][newy]){
                end[x][y] = {-1,-1};
                break;
                
            }
            else if(arr[newx][newy]=='W' || arr[newx][newy]=='C' || (cam[newx][newy] && arr[newx][newy]=='.') || arr[newx][newy]=='S'){
                end[x][y] = {-1,-1};
                break;
                
            }
            else if(arr[newx][newy]=='.'){
                end[x][y] = {newx,newy};
                break;
            }
            bVis[newx][newy] = true;
            newx +=mp[arr[newx][newy]].first;
            newy +=mp[arr[newx][newy]].second;


        }
    }
    q.push(start);
    dis[start.first][start.second] = 0;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        vis[x][y] = true;
        for(int i=0;i<4;i++){
            int newx = x+X[i];
            int newy = y+Y[i];
            size_t found = look.find(arr[newx][newy]);
            if(found!= string::npos){
                int endX = end[newx][newy].first;
                int endY = end[newx][newy].second;

                if(endX==-1 || vis[endX][endY] || (endX==x && endY==y))continue;
                dis[endX][endY] = min(dis[endX][endY], dis[x][y] + 1);
                q.push({endX, endY});
                
            }
            else if(arr[newx][newy]!='W' && !cam[newx][newy] && !vis[newx][newy]){
                vis[newx][newy] = true;
                dis[newx][newy] = min(dis[newx][newy], dis[x][y] +1);
                q.push({newx, newy});
                
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr[i][j]=='.'){
                if(!vis[i][j])cout<<-1<<"\n";
                else cout<<dis[i][j]<<"\n";
            }
        }
    }
    
    
    return 0;
}
