//7 our of 15 marks
#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    string n, h;
    cin>>n>>h;
    set<string>s;
    vector<int>freq1(124);
    vector<int>freq2(124);

    if(n.length()>h.length()){
        cout<<0;
        return 0;
    }
    for(char c: n){
        freq1[(int)c]++;
    }

    for(int i=0;i<=h.length()-n.length();i++){
        bool found = true;
        for(int j=i;j<i+n.length();j++){
            freq2[(int)h[j]]++;
        }
        for(int j=97;j<=122;j++){
            if(freq1[j]!=freq2[j])found = false;
        }
        if(found){
            s.insert(h.substr(i, n.length()));
        }
        fill(freq2.begin(), freq2.end(), 0);
    }
    cout<<s.size();



    return 0;
}