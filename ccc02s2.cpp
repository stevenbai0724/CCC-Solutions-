#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    
    int n, m; cin>>n>>m;
    int deno, num;

    if(n%m==0){
        cout<<n/m;
        return 0;
    }
    else {
        int r = n%m;   
        int gcf = 1;
        for(int i =1; i<=r;i++){
            if(r%i ==0 && m%i==0){
                gcf = i;
            }
        }
        
        deno = m/gcf;
        num = r/gcf;
        if(n/m !=0)cout<<n/m<<" "<<num<<"/"<<deno;
        else cout<<num<<"/"<<deno;
    }
    return 0;
}