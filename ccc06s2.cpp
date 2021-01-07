//
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    string plain, cipher1, cipher2, ans;
    getline(cin,plain);
    getline(cin,cipher1);
    getline(cin,cipher2);
    ans = "";
    vector<char>key(91);
    fill(key.begin(), key.end(), '.');

    for(int i=0;i<plain.length();i++){
        key[(int)cipher1[i]] = plain[i];
    }
    for(int i=0;i<cipher2.length();i++){
        ans+=key[(int)cipher2[i]];
    }
    cout<<ans;

    return 0;
}