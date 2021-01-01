#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int k; cin>>k;
    vector<int>arr;
    arr.push_back(0);
    int sum = 0;
    while(k--){
        int n; cin>>n;
        if(n==0)arr.pop_back();
        else arr.push_back(n);
    }
    for(auto x:arr){
        sum+= x;
    }
    cout<<sum;

    return 0;
}