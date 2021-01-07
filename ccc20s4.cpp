//8 out of 15 marks
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    string s; cin>>s;
    int n = s.length();
    int count = 0;
    int count2 = 0;
    int ans = 1e18;
    vector<int>psa(n+1);
    vector<int>psa2(n+1);
    vector<int>arr(n);
    vector<int>arr2(n);
    int sum = 0;

    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            count++;
            arr2[i]++;
        }
        else arr[i]++;
    }
    count2= n-count;
    for(int i=1;i<=n;i++){
        sum+=arr[i-1];
        psa[i] = sum;
       
    }
    sum = 0;
    for(int i=1;i<=n;i++){
        sum +=arr2[i-1];
        psa2[i] = sum;
    }
    for(int i=1;i<=n-count+1;i++){
        ans = min(ans, psa[i+count-1]-psa[i-1]);
    }
    for(int i=1;i<=n-count2+1;i++){
        ans = min(ans, psa2[i+count2-1]-psa2[i-1]);
    }
    
    cout<<ans;

    return 0;
}