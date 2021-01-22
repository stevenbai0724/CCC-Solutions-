//https://dmoj.ca/problem/ccc12s2
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    map<char, int>m;
    int sum = 0;
    for(int i=48;i<=57;i++) m[(char)i] = i -48;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    string s; cin>>s;

    for(int i=1;i<s.length();i+=2){
        int cur = m[s[i]]*m[s[i-1]];
        if(i==s.length()-1){
            sum+=cur;
            continue;
        }
        if(m[s[i+2]]>m[s[i]]){
            sum-=cur;
            continue;
        }
        sum+=cur;
    }
    cout<<sum<<"\n";



    return 0;
}