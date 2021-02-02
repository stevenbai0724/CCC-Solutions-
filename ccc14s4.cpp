//https://dmoj.ca/problem/ccc14s4
//7/15
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, t;
    cin>>n>>t;
    int ans = 0;
    vector<vector<int>>arr(2001, vector<int>(2001));
    vector<vector<int>>psa(2001, vector<int>(2001));

    while(n--){
        int x1, y1, x2, y2, m;
        cin>>x1>>y1>>x2>>y2>>m;

        arr[x1+1][y1+1] +=m;
        arr[x1+1][y2+1] -=m;
        arr[x2+1][y1+1] -=m;
        arr[x2+1][y2+1] +=m;

    }
    for(int i=1;i<=2000;i++){
        for(int j=1;j<=2000;j++){
            psa[i][j] = arr[i][j] + psa[i][j-1] + psa[i-1][j] - psa[i-1][j-1];
        }
    }
    for(int i=1;i<=2000;i++){
        for(int j=1;j<=2000;j++){
            if(psa[i][j]>=t)ans++;
        }
    }
    cout<<ans<<"\n";

    return 0;
 
}