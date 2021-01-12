//
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

    int n; cin>>n;
    vector<string>let(n);
    vector<string>key(n);
    for(int i=0;i<n;i++){
        cin>>let[i]>>key[i];
    }
    string s; cin>>s;
    int count = 0;
    string cur = "";
    string ans = "";
    while(count!=s.length()){
        cur+=s[count];
        count++;
        auto it = find(key.begin(), key.end(), cur);
        if(it == key.end())continue;
        int index = it - key.begin();
        ans+=let[index];
        cur="";
    }
    cout<<ans;
    return 0;
}