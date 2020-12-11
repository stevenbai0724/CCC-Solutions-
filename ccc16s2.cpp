#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n,m; cin>>n>>m;
    vector<int>arr(m+1);
    vector<int>arr2(m+1);
    int sum = 0;

    for(int i =0;i<m;i++){
        cin>>arr[i];
    }
    for(int i =0;i<m;i++){
        cin>>arr2[i];
    }
    sort(arr.begin(), arr.begin()+m);
    if(n==1)sort(arr2.begin(), arr2.begin()+m);
    if(n==2)sort (arr2.begin(), arr2.begin()+m, greater<int>());

    for(int i=0;i<m;i++){
        sum+= max(arr[i], arr2[i]);
    }
    cout<<sum;



    return 0;
}