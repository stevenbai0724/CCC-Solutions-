#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin>>n;
    bool found;
    vector<string>arr1(n+1);
    vector<string>arr2(n+1);

    for(int i =1;i<=n;i++){
        cin>>arr1[i];
    }
    for(int i =1;i<=n;i++){
        cin>>arr2[i];
    }

    for(int i=1;i<=n;i++){
        if(arr1[i]==arr2[i]){
            cout<<"bad";
            return 0;
        }
    }

    for(int i = 1;i<=n;i++){
        found = false;
        string first = arr1[i];
        string second = arr2[i];

        for(int j =1;j<=n;j++){
            if(arr1[j]==second && arr2[j]==first){
                found = true;
                break;
            }
        }
        if(!found) break;
    }
    if(found) cout<<"good";
    else cout<<"bad";




    return 0;
}