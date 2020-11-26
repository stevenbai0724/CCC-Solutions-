#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int c, r; cin>>c>>r;
    int curx = 0;
    int cury = 0;

    while(true){
        int x,y;
        cin>>x>>y;

        if(x==0 && y==0)break;

        if(curx+x <=0) curx = 0;
        if(curx+x >=c) curx = c;
        if(cury+y <=0) cury = 0;
        if(cury+y >=r) cury = r;
        if(curx+x>0 && curx+x<c) curx+=x;
        if(cury+y>0 && cury+y<r) cury+=y;

        cout<<curx<<" "<<cury<<"\n";

    }
    


    return 0;
}