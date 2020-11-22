#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int m; cin>>m; //coins
    int c1,c2,c3; // 30/35th, 60/100th, 9/10th
    cin>>c1>>c2>>c3;
    int t = 0;
    while(m!=0){

        t++;
        c1++;
        if(c1==35){
            m+=30;
            c1 = 0;
        }
        m--;
        if(m==0) break;


        t++;
        c2++;
        if(c2==100){
            m+=60;
            c2=0;
        }
        m--;
        if(m==0) break;

        t++;
        c3++;
        if(c3==10){ 
            m+=9;
            c3=0;
        }
        m--;
        if(m==0)break;
    }
    cout<<"Martha plays "<<t<< " times before going broke.";




    return 0;
}