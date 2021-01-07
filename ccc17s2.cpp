//
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin>>n;
    vector<int>arr(n);
    vector<int>lo;
    vector<int>hi;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());
    
    for(int i=n/2-1;i>=0;i--){
        hi.push_back(arr[i]);
    }
    for(int i=n/2;i<n;i++){
        lo.push_back(arr[i]);
    }
    for(int i=0;i<n/2;i++){
        cout<<lo[i]<<" "<<hi[i]<<" ";
    }
    if(n%2==1)cout<<arr[n-1];

    return 0;
}