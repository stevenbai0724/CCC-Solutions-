//
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

#define int long long
#define string std::string
const int mod = 1e9 + 7;
int n, m;
int mx = 0;
int nd = 0;
int root = 0;
vector<bool>use(1e5+1);
vector<vector<int>>adj(1e5+1);
vector<int>dis(1e5+1);
int subtreeSize = 0;

void reset(){
    fill(dis.begin(), dis.end(), 0);
    mx = 0;
    subtreeSize = 0;
}

void dfs2(int v, int parent){

    subtreeSize++;
    for(int u: adj[v]){
        if(parent == u || !use[u])continue;
        dis[u] = dis[v] + 1;

        if(dis[u]>mx){
            nd = u;
            mx = dis[u];
        }
        dfs2(u, v);
    }
}   
void dfs(int v, int parent){

    for(int u: adj[v]){
        if(u==parent)continue;
        dfs(u, v);
        if(use[v] || use[u]) use[v] = true;
    }
    
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    cin>>n>>m;
    
    for(int i=1;i<=m;i++){
        int x; cin>>x;
        x++;
        use[x] = true;
        root = x;
    }
    for(int i=1;i<n;i++){
        int a, b;
        cin>>a>>b;
        a++;
        b++;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(root, -1);
    
    dfs2(root, -1);

    reset();

    dfs2(nd, -1);
    
    cout<< (subtreeSize-1)*2 - mx   <<"\n";

    return 0;
}