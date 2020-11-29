#include <bits/stdc++.h>
using namespace std;
int main(){

    int b, n, y, total;
    cin>>b>>n>>y>>total;
    int ans = 0;

    for(int i = 0;i<=total;i++){
        for(int j = 0;j<=total;j++){
            for(int k = 0;k<=total;k++){
                if((i*b)+(j*n)+(k*y)<=total && i+j+k>0){
                    cout<<i<<" Brown Trout, "<<j<<" Northern Pike, "<<k<<" Yellow Pickerel"<<"\n";
                    ans ++;
                }
            }   
        }
    }
    cout<<"Number of ways to catch fish: "<<ans;


    return 0;
}