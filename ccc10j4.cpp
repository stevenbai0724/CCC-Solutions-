#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    while(true){
        int n; cin>>n;
        if(n==0)break;

        vector<int>arr(n+1);
        vector<int>diff(n);

        for(int i =1;i<=n;i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<0<<"\n";
            continue;
        }
        for(int i =1;i<n;i++){
            diff[i] = arr[i+1]-arr[i];
        }
        int start = diff[1];
        int pattern = 1;
        int count = 1;
        while(true){

            int index = 1+(count*pattern);

            if(index>n-1){
                cout<<pattern<<"\n";
                break;
            }

            if(diff[index]==start){
                count++;
                continue;
            }
            if(diff[index]!=start){
                count = 1;
                pattern++;
            }
        }

    }


    return 0;
}