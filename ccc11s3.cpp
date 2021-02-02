#include <bits/stdc++.h>
using namespace std;
#define int long long
int ans = 0;
vector<int>unit(9);
vector<int>patient(9);

void add(int u, int p){ //give u to p 
    int n = min(unit[u], patient[p]);
    ans+=n;
    unit[u]-=n;
    patient[p]-=n;
    
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    for(int i=1;i<=8;i++){
        cin>>unit[i];
    }
    for(int i=1;i<=8;i++){
        cin>>patient[i];
    }
    for(int i=1;i<=8;i++){


        switch(i){
            case(2):
                add(2,2);
            break;
            case(3):
                add(3,3);
            break;
            case(4):
                add(4,4);
                add(3,4);
                add(2,4);
                
            break;
            case(5):
                add(5,5);
            break;
            case(6):
                add(6,6);
                add(5,6);
                add(2,6);
                
            break;
            case(7):
                add(7,7);
                add(5,7);
                add(3,7);
                
                
            break;
            case(8):
                add(8,8);
                add(4,8);
                add(6,8);
                add(2,8);
                add(7,8);
                add(5,8);
                add(3,8);
               
                
                      
            break;
            
        }
        add(1, i);
    
    }
    cout<<ans;
    return 0;

}

    

    
