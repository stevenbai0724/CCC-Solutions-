#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin>>n;
    int mx =0;
    int mx2 = 0;
    vector<int>arr(1001);
    vector<int>lar;
    vector<int>lar2;

    for(n; n>0; n--){
        int x; cin>>x;
        arr[x]++;
    }
    for(int i=1;i<=1000;i++){
        mx = max(mx, arr[i]);
    }
    for(int i=1;i<=1000;i++){
        if(arr[i]!=mx){
            mx2 = max(mx2, arr[i]);
        }
    }
    for(int i =1;i<=1000;i++){
        if(arr[i]==mx) lar.push_back(i);
    }
    for(int i=1;i<=1000;i++){
        if(arr[i]==mx2)lar2.push_back(i);
    }

    if(lar.size()==1 && lar2.size()==1)cout<<abs(lar.at(0)-lar2.at(0));
    if(lar.size()>1){
        sort(lar.begin(), lar.end());
        cout<<abs(lar.back()-lar.front());
    }
    if(lar.size()==1 && lar2.size()>1){
        int ans = 0;
        for(int i =0;i<lar2.size();i++){
            ans = max(ans, abs(lar.at(0)-lar2.at(i)));
        }
        cout<<ans;  
    }

    return 0;
}