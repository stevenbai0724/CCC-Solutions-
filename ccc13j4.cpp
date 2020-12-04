#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m; cin>>n>>m;
    int sum = 0;
    int count = 0;
    vector<int>arr(m+1);

    for(int i =1;i<=m; i++){
       cin>>arr[i];
    }

    while(true){
        bool sort = true;
        for(int i=1;i<m;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                sort = false;
            }
        }
        if(sort) break;
    }
    for(int i=1;i<=m;i++){
        if(sum+arr[i]<=n){
            sum+=arr[i];
            count++;
            continue;
        }
        else break;
    }
    cout<<count;
    return 0;
}