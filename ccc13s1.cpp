#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin>>n;

    while(true){

        n++;
        bool found = true;
        int x = n;
        vector<int>arr(10);
        while(x!=0){
            arr[x%10]++;
            x /=10;
        }
        for(int i =0;i<=9;i++){
            if(arr[i] >1) found = false;
        }
        if(found){
            cout<<n;
            break;
        }
    }
    return 0;
}