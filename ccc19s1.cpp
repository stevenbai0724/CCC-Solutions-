//
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    vector<int>arr{0,1,2,3,4};
    string s; cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H'){
            int t1 = arr[1], t2 = arr[2];
            arr[1] = arr[3];
            arr[2] = arr[4];
            arr[3] = t1;
            arr[4] = t2;
        }
        else{
            int t1 = arr[1], t2 = arr[3];
            arr[1] = arr[2];
            arr[2] = t1;
            arr[3] = arr[4];
            arr[4] = t2;
        }
    }
    cout<<arr[1]<<" "<<arr[2]<<"\n"<<arr[3]<<" "<<arr[4]<<"\n";
    
    return 0;
}