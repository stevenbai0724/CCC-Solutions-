#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin>>n;
    vector<vector<int>>adj(n+1);

    while(true){
        int x, y;
        cin>>x>>y;
        if(x==0 && y==0) break;

        adj[x].push_back(y);
    }

    vector<bool>vis(n+1);
    queue<int>q;
    vis[1] = true;
    q.push(1);
    while(!q.empty()){
        int cur = q.front(); q.pop();
        for(int i =0;i<adj[cur].size();i++){
            int nxt = adj[cur].at(i);
            if(!vis[nxt]){
                vis[nxt] = true;
                q.push(nxt);
            }
        }
    }
    if(!vis[n]){
        cout<<0;
        return 0;
    }
    else{
        vector<int>dp(n+1);
        dp[1] = 1;

        for(int i = 1;i<=n;i++){
            if(vis[i]){
                for(int j = 0;j<adj[i].size();j++){
                    int nxt = adj[i].at(j);
                    dp[nxt] +=dp[i];
                }    
            }
        }

        cout<<dp[n];
    }
    return 0 ;
}