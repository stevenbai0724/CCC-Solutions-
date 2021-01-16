//
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    string s;
    getline(cin,s);
    string sad = ":-(";
    string happy = ":-)";
    int hCount = 0, sCount = 0;

    size_t found = s.find(happy);

    while(true){
        if(found == string::npos)break;
        hCount++;
        found = s.find(happy, found+3);
    }
    found = s.find(sad);
    while(true){
        if(found ==string::npos)break;
        sCount++;
        found = s.find(sad, found+3);
    }
    if(hCount>sCount){
        cout<<"happy";
    }
    else if(sCount>hCount){
        cout<<"sad";
    }
    else if(hCount == 0 && sCount==0){
        cout<<"none";
    }
    else{
        cout<<"unsure";
    }

    
    return 0;
}