//
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    vector<int>nums;
    vector<bool>prime(2e6+1, true);

    prime[0] = false;
    prime[1] = false;

    for(int i=2;i*i<=2e6;i++){
        if(prime[i]){
            for(int j=2;i*j<=2e6;j++){
                prime[i*j] = false;
            }
        }
    }

    for(int i=2;i<=2e6;i++){
        if(prime[i])nums.push_back(i);
    }
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        for(auto x: nums){
            if(prime[n*2 -x]){
                cout<<x<<" "<<n*2-x<<"\n";
                break;
            }
        }
    }
    return 0;
}