//https://dmoj.ca/problem/ccc11j5
#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>>adj;
int n;
int ans = 1;
bool bfs(vector<int>r){
    vector<bool>vis(n+1, false);
    queue<int>q;
    q.push(n);
    while(!q.empty()){
        int x = q.front(); q.pop();
        vis[x] = true;
        for(int to : adj[x]){
            auto it = find(r.begin(), r.end(), to);

            if(!vis[to] && it==r.end()){
                vis[to] = true;
                q.push(to);
            }
        }
    }
    for(int i=1;i<=n;i++){
        auto it = find(r.begin(), r.end(), i);
        if(!vis[i] && it==r.end())return false;
    }
    return true;
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
   
    cin>>n;
    adj.resize(n+1);
    for(int i=1;i<n;i++){
        int x; cin>>x;
        adj[i].push_back(x);
        adj[x].push_back(i);
    }

    for(int i= 1;i<(1<<(n-1));i++){
        vector<int>temp;
        for(int j=0;j<n-1;j++){
            if((1<<j)&i)temp.push_back(j+1);
        }
        
        if(bfs(temp))ans++;
        
    }
    cout<<ans<<"\n";
 
    return 0;

}