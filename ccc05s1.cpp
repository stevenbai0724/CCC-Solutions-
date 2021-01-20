//
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t; cin>>t;
    map<char, char>m;
    for(int i=65;i<=67;i++)m[(char)i] = '2';
    for(int i=68;i<=70;i++)m[(char)i] = '3';
    for(int i=71;i<=73;i++)m[(char)i] = '4';
    for(int i=74;i<=76;i++)m[(char)i] = '5';
    for(int i=77;i<=79;i++)m[(char)i] = '6';
    for(int i=80;i<=83;i++)m[(char)i] = '7';
    for(int i=84;i<=86;i++)m[(char)i] = '8';
    for(int i=87;i<=90;i++)m[(char)i] = '9';
    for(int i=48;i<=57;i++)m[(char)i] = (char)i;
    while(t--){
        string s; cin>>s;
        string ans = "";
        int count = 0;
         
        for(int i=0;i<s.length();i++){
            if(s[i]=='-')continue;
            
            count++;
            ans+=m[s[i]];
            if(count==3 || count==6)ans+='-';
            if(count==10)break;
        }
        cout<<ans<<"\n";
    }
    return 0;
}