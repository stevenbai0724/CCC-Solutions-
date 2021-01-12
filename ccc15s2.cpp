#include <bits/stdc++.h>
using namespace std;
#define int long long

int size(char c){
    if(c=='S')return 1;
    if(c=='M')return 2;
    if(c=='L')return 3;
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int count = 0;
    int j, a;
    cin>>j>>a;
    vector<int>jer(max(j,a)+1);

    for(int i=1;i<=j;i++){
        char c; cin>>c;
        jer[i] = size(c);
    }
    for(int i=1;i<=a;i++){
        char c;
        int x,n;
        cin>>c>>n;
        x = size(c);
        if(jer[n]>=x){
            count++;
            jer[n] = -1;
        }
    }
    cout<<count;


    return 0;
}