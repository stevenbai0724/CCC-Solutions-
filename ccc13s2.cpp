#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int w,n; cin>>w>>n;
    vector<int>arr(n+1);
    vector<int>psa(n+1);

    int count = 0;

    for(int i =1;i<=n;i++){
        cin>>arr[i];
    }
    int psasum = 0;
    for(int i = 1;i<=n;i++){
        psasum+=arr[i];
        psa[i] = psasum;
    }
    
    for(int i =1;i<=n;i++){
        int sum = 0;
        if(i<=4){
            sum = psa[i];
        }
        else{
            sum = psa[i] - psa[i-4];
        }   
        if(sum<=w) count++;
        else break;
    }
    cout<<count;
    return 0;
}