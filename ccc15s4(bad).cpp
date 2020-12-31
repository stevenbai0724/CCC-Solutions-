//passes 13/15 cases :(
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int k, n, m;
    cin>>k>>n>>m;
    int c = 1e9;


    if(k==1){//run a simple dijkstra's algorithm to avoid all paths that have h>0
         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
        vector<vector<pair<int, int>>>adj(n+1);
        vector<int>vis(n+1);
        vector<int>dis(n+1, 1e18);

        for(int i=1;i<=m;i++){
            int x,y,w,h;
            cin>>x>>y>>w>>h;
            if(h==0){
                adj[x].push_back({w,y});
                adj[y].push_back({w,x});
            }
        }
        int start, end;cin>>start>>end;
        dis[start] = 0;
        q.push({0,start});

        while(!q.empty()){
            int y = q.top().second;
            q.pop();
            if(vis[y])continue;
            vis[y] = true;
            for(auto x: adj[y]){
                int newy = x.second;
                int neww = x.first;
                if(neww+dis[y]<dis[newy]){
                    dis[newy] = neww+dis[y];
                    q.push({dis[newy],newy});
                }
            }
        }
        if(!vis[end])cout<<-1;
        else cout<<dis[end];
        return 0;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
    vector<vector<pair<int, int>>>adj(n+1);
    vector<bool>vis(n+1);
    vector<vector<int>>dis(n+1,vector<int>(k+1));

    for(int i=0;i<=n;i++){
        for(int j=0;j<=k;j++){
            dis[i][j] = 1e18;
        }
    }
    for(int i=1;i<=m;i++){
        int x,y,w,h;
        cin>>x>>y>>w>>h;
        adj[x].push_back({w*c+h,y});
        adj[y].push_back({w*c+h,x});
    }
    int start, end;
    cin>>start>>end;
    for(int i=0;i<=k;i++){
        dis[start][i] = 0;
    }
    q.push({0,start});

    vector<int>cur(n+1);

    while(!q.empty()){
        int y = q.top().second;
        int w = q.top().first/c;
        int h = q.top().first%c;
     
        q.pop();
        if(vis[y])continue;
        vis[y] = true;
        for(auto x: adj[y]){
            int newy = x.second;
            int neww = x.first/c;
            int newh = x.first%c;
   
            for(int j=cur[y];j<k-newh;j++){
                if(dis[y][j]+neww<dis[newy][j+newh]){
                    dis[newy][j+newh] = dis[y][j] + neww;
                    q.push({neww*c+newh, newy});
                    cur[newy] = newh;

                        
                }
              
            }
        }
    }
    int ans = 1e18;
    for(int i=0;i<=k;i++){
        ans = min(dis[end][i], ans);
    }
    if(ans!=1e18)cout<<ans;
    else cout<<-1;
   



    
    return 0;
}
