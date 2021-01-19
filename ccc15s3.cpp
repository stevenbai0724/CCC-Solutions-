//
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int g, p;
    cin>>g>>p;
    bitset<100002>b;

    b.flip();
    for(int i=1;i<=p;i++){
        int x; cin>>x;
        int pos = b._Find_next(g-x);
        if(pos>g){
            cout<<i-1;
            return 0;
        }
        b[pos] = 0;
       

    }
    cout<<p;
    
    return 0;
}