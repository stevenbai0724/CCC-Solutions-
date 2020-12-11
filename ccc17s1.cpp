#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; 

    vector<int>arr1(n+1);
    vector<int>arr2(n+1);  
    vector<int>psa1(n+1);
    vector<int>psa2(n+1);
    int sum = 0;
    int ans = 0;

    for(int i=1;i<=n;i++){
        cin>>arr1[i];
        sum+=arr1[i];
        psa1[i] = sum;
    }
    sum = 0;

    for(int i=1;i<=n;i++){
        cin>>arr2[i];
        sum+=arr2[i];
        psa2[i] = sum;
    }
    for(int i =1;i<=n;i++){
        if(psa1[i]==psa2[i]) ans = i;
    }
    cout<<ans;

}