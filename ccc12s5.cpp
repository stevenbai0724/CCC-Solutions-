#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m,q;
    cin>>n>>m>>q;
    vector<vector<int>>dp(n+1, vector<int>(m+1));
    vector<vector<bool>>cats(n+1, vector<bool>(m+1));
    for(q;q>0;q--){
        int x, y;
        cin>>x>>y;
        cats[x][y] = true;
    }
    dp[1][1] = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1 && j==1 || (cats[i][j])) continue;
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    cout<<dp[n][m];
}