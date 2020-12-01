#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;cin>>n;
    string s = "";
    string a = "";
    int count = 0;
    for(int i =0;i<n;i++){
        string x; cin>>x;
        s+=x;
    }
    for(int i =0;i<n;i++){
        string x; cin>>x;
        a+=x;
    }
    for(int i =0;i<n;i++){
        if(s[i]==a[i])count++;
    }
    cout<<count;

    return 0;
}