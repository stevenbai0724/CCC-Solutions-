//https://dmoj.ca/problem/ccc96s3
#include <bits/stdc++.h>
using namespace std;
#define int long long


void printWords(int len, int ones, string word){
    if(len==0){
        cout<<word<<"\n";
        return;
    }
    if(ones>0)printWords(len-1, ones-1, word+"1");
    if(len>ones)printWords(len-1, ones,word + "0");
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin>>t;
    while(t--){
        cout<<"The bit patterns are\n";
        int n, k;
        cin>>n>>k;
        printWords(n,k,"");
        if(t>0)cout<<"\n";
    }
    return 0;
}