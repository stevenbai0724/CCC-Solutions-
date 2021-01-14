//
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin>>n;

    vector<vector<int>>arr(n+1, vector<int>(n+1));
    vector<vector<int>>temp(n+1, vector<int>(n+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>temp[i][j];
        }
    }

    while(true){
        bool found = true;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                arr[i][j] = temp[j][n+1-i];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=2;j<=n;j++){
                if(arr[i][j]<=arr[i][j-1])found = false;
            }
        }
        for(int i=1;i<n;i++){
            if(arr[i][1]>arr[i+1][1])found =false;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j)continue;
                for(int k=2;k<=n;k++){
                    if(arr[i][1]<arr[j][1] && arr[i][k]>=arr[j][k])found = false;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                temp[i][j] = arr[i][j];
            }
        }
        if(found)break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}