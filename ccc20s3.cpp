//
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

#define int long long
#define string std::string
const int mod = 998244353;
const int mod2 = 1e9+7;

bool equal(vector<int>a, vector<int>b){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    string s, t;
    cin>>t>>s;
    vector<int>freq(26);
    vector<int>freq2(26);
    int n = s.length();
    int m = t.length();

    for(int i=0;i<m;i++){
        freq[t[i]-97]++;
    }
    vector<int>power(n+1);power[0] = 1;
    vector<int>power2(n+1);power2[0] = 1;
    vector<int>hashes(n+1);
    vector<int>hashes2(n+1);
    int base = 131;
    for(int i=1;i<=n;i++){
        power[i] = power[i-1]*base;
        power[i]%=mod;
        power2[i] = power2[i-1]*base;
        power2[i]%=mod2;

        hashes[i] = hashes[i-1]*base + s[i-1];
        hashes[i]%=mod;
        hashes2[i] = hashes2[i-1]*base + s[i-1];
        hashes2[i]%=mod2;
    }
    set<int>ans;
    set<int>ans2;
    for(int i=0;i<m;i++){
        freq2[s[i]-97]++;
    }
    int answer= 0;
    for(int i=m;i<=n;i++){
        if(i!=m){
            freq2[s[i-1]-97]++;
            freq2[s[i-1-m]-97]--;
            
        }
        if(equal(freq, freq2)){
            int hsh = hashes[i]-(hashes[i-m]*power[m])%mod;
            hsh+=mod;
            hsh%=mod;
            int hsh2 = hashes2[i]-(hashes2[i-m]*power2[m])%mod2;
            hsh2+=mod2;
            hsh2%=mod2;
            if(ans.find(hsh)==ans.end()||ans2.find(hsh2)==ans2.end()){
                answer++;
                ans.insert(hsh);
                ans2.insert(hsh2);
            }
        }
    }
    cout<<answer<<"\n";


    return 0;
}