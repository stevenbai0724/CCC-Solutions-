#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int x, y; cin>>x>>y;
    int count =2;
    vector<int>arr;
    arr.push_back(x);
    arr.push_back(y);
    while(true){
        int n = arr.at(count-2) - arr.at(count-1);

        if(n<=arr.at(count-1)){
            arr.push_back(n);
            count++;
            continue;
        }
        else break;
    }
    cout<<arr.size() +1;


    return 0;
}