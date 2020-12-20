#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin>>t;  
    int maxx = 0;
    int minx = 1000;
    int maxy = 0;
    int miny = 1000;

    for(t; t>0;t--){
        string s; cin>>s;
        int index = 0;
        int x, y;
        for(int i=0;i<s.length();i++){
            if(s[i]==','){
                index = i;
                break;
            }
        }
        x = stoi(s.substr(0,index));
        y = stoi(s.substr(index+1,s.length()-index-1));

        maxx = max(maxx, x);
        minx = min(minx, x);
        maxy = max(maxy, y);
        miny = min(miny, y);
    }
    cout<<minx-1<<","<<miny-1<<"\n";
    cout<<maxx+1<<","<<maxy+1<<"\n";



    return 0;
}