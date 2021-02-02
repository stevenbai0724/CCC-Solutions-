#include <bits/stdc++.h>
using namespace std;
#define int long long

struct edge{
    int b,t,h;
    edge(int bb,int tt,int hh){
        b = bb;
        t = tt;
        h = hh;
    }
};
vector<edge>adj[2001];
int dis[2001][201];

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int k,n, m;
    cin>>k>>n>>m;
    for(int i=0;i<=2000;i++){
    for(int j=0;j<=200;j++){
        dis[i][j] = 1e9;
    }
    }
    for(int i=0;i<m;i++){
        int x,y,d,h;
        cin>>x>>y>>d>>h;
        adj[x].push_back(edge(y,d,h));
        adj[y].push_back(edge(x,d,h));
    }    
    int a,b;
    cin>>a>>b;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
    q.push({0,a});
    for(int i=0;i<=200;i++){
        dis[a][i] = 0;
    }
    while(!q.empty()){
        int to = q.top().second;
        q.pop();
        for(int i=0;i<adj[to].size();i++){
            for(int j=0;j+adj[to][i].h<k;j++){
                int alt = dis[to][j]+adj[to][i].t;
                if(alt<dis[adj[to][i].b][j+adj[to][i].h]){
                    dis[adj[to][i].b][j+adj[to][i].h] = alt;
                    q.push({alt, adj[to][i].b});
                }
            }
        }
    }
    int ans = 1e18;
    for(int i=0;i<k;i++){
        ans = min(ans, dis[b][i]);
    }
    if(ans==1e9)cout<<-1<<"\n";
    else cout<<ans<<"\n";
    
    return 0;
}
