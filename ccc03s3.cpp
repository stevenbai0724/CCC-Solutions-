#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int f, n, m;
    cin>>f>>n>>m;
    vector<vector<char>>arr(n+1, vector<char>(m+1));
    vector<vector<bool>>vis(n+1, vector<bool>(m+1));
    vector<int>changeX{1,-1,0,0};
    vector<int>changeY{0,0,-1,1};
    queue<int>q;
    vector<int>roomSize;
    int sum =0;
    int ans = 0;
    for(int i =1;i<=n;i++){
        string s; cin>>s;
        for(int j=1;j<=m;j++){
            arr[i][j] = s[j-1];
        }
    }
    for(int i =1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr[i][j]!='I' && !vis[i][j]){
                int roomCount = 1;
                vis[i][j] = true;
                q.push(i*100+j);
                while(!q.empty()){
                    int x = q.front()/100; int y = q.front()%100; q.pop();
                    for(int k=0;k<4;k++){
                        int newx = x + changeX[k];
                        int newy = y + changeY[k];
                        if(newx>0 && newx<=n &&newy>0 && newy<=m){
                            if(!vis[newx][newy] && arr[newx][newy]!='I'){
                                vis[newx][newy] = true;
                                roomCount++;
                                q.push(newx*100+newy);
                            }
                        }
                    }
                }
                sum+= roomCount;
                roomSize.push_back(roomCount);
            }
        }
    }
    sort(roomSize.begin(), roomSize.end(), greater<int>());

    for(int i =0;i<roomSize.size();i++){
        if(f-roomSize.at(i) <0) break;
        else if(f - roomSize.at(i)>=0){
            ans ++;
            f -=roomSize.at(i);
        }
    }
    if(ans==1) cout<<"1 room, "<<f<<" square metre(s) left over";
    else cout<<ans<<" rooms, "<<f<<" square metre(s) left over";

    return 0;
}