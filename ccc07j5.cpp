//https://dmoj.ca/problem/dmopc18c2p4
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    vector<int>dp(1e5+1,0);
    vector<bool>stop(1e5+1, false);
    vector<bool>vis(1e5+1, false);
    queue<int>q;
    stop[0]=true;
    stop[990]=true;
    stop[1010]=true;
    stop[1970]=true;
    stop[2030]=true;
    stop[2940]=true;
    stop[3060]=true;
    stop[3930]=true;
    stop[4060]=true;
    stop[4970]=true;
    stop[5030]=true;
    stop[5990]=true;
    stop[6010]=true;
    stop[7000]=true;
    int a, b, n;
    cin>>a>>b>>n;
    while(n--){
        int x; cin>>x;
        stop[x] = true;
    }
    q.push(0);
    dp[0] =1;

    while(!q.empty()){
        int cur = q.front();q.pop();

        for(int i=cur+a;i<=cur+b;i++){
            if(stop[i]){
                if(!vis[i]){
                    q.push(i);
                    vis[i] = true;
                }
                dp[i] +=dp[cur];
            }
        }
    }
    cout<<dp[7000]<<"\n";


    return 0;
}