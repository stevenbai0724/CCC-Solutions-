//
#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int n, m;
    cin>>n>>m;
    vector<vector<int>>arrSide(n+2, vector<int>(m+2));
    vector<vector<int>>arrDown(n+2, vector<int>(m+2));
    vector<vector<int>>psa(n+2, vector<int>(m+2));
    int t; cin>>t;

    while(t--){
        char c; int x;
        cin>>c>>x;  
        if(c=='R'){
            arrSide[x][1]++;
        }
        else{
            arrDown[1][x]++;
        }
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
        int sum = arrSide[i][1];
        for(int j=1;j<=m;j++){
            psa[i][j] += sum;
        }
    }
    for(int j=1;j<=m;j++){
        int sum = arrDown[1][j];
        for(int i=1;i<=n;i++){
            psa[i][j] +=sum;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            ans+= (1&psa[i][j]);
        }
    }
    cout<<ans<<"\n";

    return 0;
}