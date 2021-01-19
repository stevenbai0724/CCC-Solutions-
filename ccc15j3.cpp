//
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    string s; cin>>s;
    map<char, char>m;
    map<char, char>n;
    string vowel = "aeiou";
    for(int i=98;i<=99;i++) m[char(i)] = 'a';
    for(int i=102;i<=103;i++) m[char(i)] = 'e';
    for(int i=106;i<=108;i++) m[char(i)] = 'i';
    for(int i=109;i<=110;i++) m[char(i)] = 'o';
    for(int i=112;i<=114;i++) m[char(i)] = 'o';
    for(int i=115;i<=116;i++) m[char(i)] = 'u';
    for(int i=118;i<=122;i++) m[char(i)] = 'u';
    for(int i=97;i<=121;i++) n[(char)i] = char(i+1);
    n['d'] = 'f';
    n['h'] = 'j';
    n['n'] = 'p';
    n['t'] = 'v';
    n['z'] = 'z';
    m['h'] = 'i';
    m['d'] = 'e';
    for(char x: s){
        size_t found = vowel.find(x);
        if(found==string::npos){
            cout<<x<<m[x]<<n[x];
            
        }
        else cout<<x;
    }
    return 0;
}