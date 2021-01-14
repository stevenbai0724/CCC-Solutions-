//
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin>>n;
    double ans = 1e18;
    vector<double>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());

    for(int i=1;i<n-1;i++){
        if((arr[i]-arr[i-1])/2.0  + (arr[i+1]-arr[i])/2.0<ans){
            ans = (arr[i]-arr[i-1])/2.0  + (arr[i+1]-arr[i])/2.0;
        }
    }
    cout<<setprecision(1)<<fixed<<ans;
    
    return 0;
}