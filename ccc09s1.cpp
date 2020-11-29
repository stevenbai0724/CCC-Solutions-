#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m; 
    int count = 0;

    for(int i=1;i<=m;i++){
        if(pow(i, 6) >m) break;
        if(pow(i, 6) >=n)count++;
    }
    cout<<count;
}