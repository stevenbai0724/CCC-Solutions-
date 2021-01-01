#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int n; cin>>n;
    vector<int>arr(n);
    vector<string>name(n);
    int index = 0;
    int mx = 0;
    int mx2 = 0;
    string first = "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";
    string second = "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";


    for(int i=0;i<n;i++){
        string str; cin>>str;
        int r,s,d;
        cin>>r>>s>>d;
        arr[i] = (2*r)+(3*s)+d;
        name[i] = str;
    }
    if(n==0){
        cout<<"";
        return 0;
    }
    if(n==1){
        cout<<name[0];
        return 0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>mx || (arr[i]==mx &&  std::string(name[i])<=first)){
            first = name[i];
            mx = arr[i];
            index = i;
        }
    }
    for(int i=0;i<n;i++){
        if((arr[i]>mx2  || (arr[i]==mx2 &&  std::string(name[i])<=second)) && i!=index){
            second = name[i];
            mx2 = arr[i];
        }
    }
    cout<<first<<"\n"<<second;

    



    return 0;
}