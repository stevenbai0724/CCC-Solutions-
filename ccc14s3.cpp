//
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int cur = 1;
        vector<int>a,b;   
        
        for(int i=1;i<=n;i++){
            int x; cin>>x;
            a.push_back(x);
        }
        while(!a.empty()){
            int x = a.back();
            a.pop_back();

            if(x==cur){
                cur++;
                while(!b.empty() && b.back()==cur){
                    cur++;
                    b.pop_back();
                }
                continue;
            }
            b.push_back(x);
        }
        while(!b.empty() && b.back()==cur){
            cur++;
            b.pop_back();
        }
        if(b.empty())cout<<"Y\n";
        else cout<<"N\n";
    }

    return 0;
}