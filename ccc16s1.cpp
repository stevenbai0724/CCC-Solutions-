//
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

#define int long long
#define string std::string
const int mod = 1e9 + 7;

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    string s,t;
    cin>>s>>t;  
    int n = s.length();

    int ass = 0;
    int cnt = 0;
    vector<int>freq(26);
    vector<int>freq2(26);

    for(int i=0;i<n;i++){
        freq[s[i]-97]++;
    }
    for(int i=0;i<n;i++){
        if(t[i]!='*'){
            freq2[t[i]-97]++;
        }
        else ass++;
    }
    for(int i=0;i<26;i++){
        if(freq[i]<freq2[i]){
            cout<<"N\n";
            return 0;
        }
        cnt+= freq[i]-freq2[i];
    }

    if(cnt==ass)cout<<"A\n";
    else cout<<"N\n";
    


    return 0;
}