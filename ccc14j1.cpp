#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int x, y, z;
    cin>>x>>y>>z;
    
    if(x+y+z != 180) cout<<"Error";
    else if(x==60 && y==60 && z==60) cout<<"Equilateral";
    else if(x==y || y==z|| x==z) cout<<"Isosceles";
    else cout<<"Scalene";
    
    return 0;
}