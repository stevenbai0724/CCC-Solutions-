#include <bits/stdc++.h>
using namespace std;
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m;
    cin>>n>>m;
    vector<vector<pair<int, int>>>adj(n+1);
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>>q;
    vector<int>dis(n+1, 1e9);
    vector<int>vis(n+1);
    vector<pair<int, int>>pencil;
    
    for(int i=1;i<=m;i++){
        int x,y,w;
        cin>>x>>y>>w;
        adj[x].push_back({w,y});
        adj[y].push_back({w,x});
    }
    int k; cin>>k;
    while(k--){
        int x, y;
        cin>>x>>y;
        pencil.push_back({x,y});
    }
    int d; cin>>d;

    dis[d] = 0;
    q.push({0,d});
    while(!q.empty()){
        int y = q.top().second;
        q.pop();
        if(vis[y])continue;
        vis[y] = true;
        for(auto x : adj[y]){
            int newy = x.second;
            int neww = x.first;
            if(dis[y]+neww<dis[newy]){
                dis[newy] = dis[y] + neww;
                q.push({dis[newy], newy});
            }
        }
    }
    int ans = 1e9;
    for(auto x: pencil){
        int to = x.first;
        int p = x.second;
        ans = min(ans, p+dis[to]);
    }
    cout<<ans<<"\n";
    
    return 0;
}