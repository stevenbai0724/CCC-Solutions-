//
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    vector<int>X{0,0,1,0,-1};
    vector<int>Y{0,1,0,-1,0};
    vector<char>dir;
    int n, m;
    cin>>n>>m;
    vector<vector<char>>arr(n+1, vector<char>(m+1));
    vector<vector<char>>ans(n+1, vector<char>(m+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            char c; cin>>c;
            arr[i][j] = c;
            ans[i][j] = c;
        }
    }
    int t; cin>>t;
    while(t--){
        char c; cin>>c;
        dir.push_back(c);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr[i][j]=='X')continue;
            for(int k=1;k<=4;k++){
                int cur = k;
                int newx = i;
                int newy = j;
                bool skip = false;
                
                for(int l = 0;l<dir.size();l++){
                    if(dir[l]=='F'){
                        newx +=X[cur];
                        newy +=Y[cur];
                        if(!(newx>=1 && newx<=n && newy>=1 && newy<=m)){
                            skip = true;
                            break;
                        }
                        if(arr[newx][newy]=='X'){
                            skip = true;
                            break;
                        }
                        
                    }
                    else if(dir[l]=='R'){
                        if(cur==4)cur = 1;
                        else cur++;
                    }
                    else if(dir[l]=='L'){
                        if(cur==1)cur = 4;
                        else cur--;
                    }
                }
                if(!skip)ans[newx][newy] = '*';

            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<ans[i][j];
        }
        cout<<"\n";
    }

    return 0;
}