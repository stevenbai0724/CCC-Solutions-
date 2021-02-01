//https://dmoj.ca/problem/ccc11s1
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    string x; getline(cin, x);
    int t = stoi(x);
    int sCount = 0;
    int tCount = 0;
    while(t--){
        string s; getline(cin, s);

        for(auto c:s){
            tCount += (c=='t' || c=='T');
            sCount += (c=='s' || c=='S');
        }
    }
    if(sCount>=tCount)cout<<"French\n";
    else cout<<"English\n";

    return 0;
 
}