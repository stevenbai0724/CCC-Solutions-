#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin>>n;
    vector<double>height(n+2), width(n+1);

    for(int i=1;i<=n+1;i++){
        cin>>height[i];
    }
    for(int i=1;i<=n;i++){
        cin>>width[i];
    }
    double ans = 0;

    for(int i=1;i<=n;i++){
        ans += (width[i] * ((height[i]+height[i+1])/2.0));
    }

    cout<<setprecision(20)<<ans<<"\n";



    return 0;
}