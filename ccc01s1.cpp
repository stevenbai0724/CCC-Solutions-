#include <bits/stdc++.h>
using namespace std;
#define int long long

int point(char c){
    if(c=='A')return 4;
    if(c=='K')return 3;
    if(c=='Q')return 2;
    if(c=='J')return 1;
    return 0;
}
int extra(vector<char>a){
    if(a.size()==0)return 3;
    if(a.size()==1)return 2;
    if(a.size()==2)return 1;
    return 0;
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    
    string t;getline(cin, t);

    bool c = false;
    bool d = false;
    bool h = false;
    bool s = false;
    vector<char>club, diamond, heart, spade;
    int cCount, dCount, hCount, sCount;
    cCount = dCount = hCount = sCount = 0;

    for(int i=0;i<t.length();i++){
        if(t[i]=='C'){
            c = true;
            continue;
        }
        if (t[i]=='D'){
            d = true;
            c = false;
            continue;
        }
        if(t[i]=='H'){
            h = true;
            d = false;
            continue;
        }
        if(t[i]=='S'){
            s = true;
            h = false;
            continue;
        }
        if(c){
            cCount += point(t[i]);
            club.push_back(t[i]);
        }
        if(d){
            dCount += point(t[i]);
            diamond.push_back(t[i]);
        }
        if(h){
            hCount += point(t[i]);
            heart.push_back(t[i]);
        }
        if(s){
            sCount += point(t[i]);
            spade.push_back(t[i]);
        }
    }

    cCount+=extra(club);
    dCount+=extra(diamond);
    hCount+=extra(heart);
    sCount+=extra(spade);

    cout<<"Cards Dealt           Points\n";
    cout<<"Clubs ";
    for(auto x:club){
        cout<<x<<" ";
    }
    cout<<"      "<<cCount<<"\n";

    cout<<"Diamonds ";
    for(auto x:diamond){
        cout<<x<<" ";
    }
    cout<<"      "<<dCount<<"\n";

    cout<<"Hearts ";
    for(auto x:heart){
        cout<<x<<" ";
    }
    cout<<"      "<<hCount<<"\n";

    cout<<"Spades ";
    for(auto x:spade){
        cout<<x<<" ";
    }
    cout<<"      "<<sCount<<"\n";
    cout<<"                Total "<<cCount+dCount+hCount+sCount;



    return 0;
}