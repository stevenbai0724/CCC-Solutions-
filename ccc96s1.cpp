#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin>>n;

    for(int t =0;t<n;t++){

        int x;cin>>x;
        int sum = 0;

        for(int i =1;i<x;i++){
            if(x%i==0) sum+=i;
        }
        if(sum<x) cout<<x<<" is a deficient number."<<"\n";
        else if(sum>x) cout<<x<<" is an abundant number."<<"\n";
        else cout<<x<<" is a perfect number."<<"\n";

    }

    return 0;
}