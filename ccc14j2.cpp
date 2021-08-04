#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin>>n;
    string s; cin>>s;
    int cnt1 = 0; int cnt2 = 0;

    for(int i=0;i<n;i++){
        if(s[i]=='A')cnt1++;
        else cnt2++;
    }
    if(cnt1>cnt2)cout<<"A\n";
    else if(cnt2>cnt1)cout<<"B\n";
    else cout<<"Tie\n";

    return 0;
}