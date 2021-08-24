#include <bits/stdc++.h>
using namespace std;
#define int long long
struct edge{
    int p, w, d;
};
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin>>n;
    int ans = 1e18;

    vector<edge>arr(n+1);

    vector<int>leftPos(1e6+1);
    vector<int>rightPos(1e6+1);
    int leftSum = 0;
    int rightSum = 0;
    int cnt = 0;

    for(int i=1;i<=n;i++){
        int p, w, d;
        cin>>p>>w>>d;

        arr[i] = {p,w,d};

        int L = max((int)0, p-d);
        int R = min((int)1e6, p+d);

        leftPos[L] += w;
        rightPos[R] += w;
        if(L>0){
            rightSum += w;
            cnt += w*L;
        }
    }
    ans = cnt;


    for(int i=1;i<=1e6;i++){
        if(rightPos[i-1]!=0 && i>1){
            leftSum += rightPos[i-1];
        }
        if(leftPos[i-1]!=0 && i>1){
            rightSum -= leftPos[i-1];
        }
        cnt += leftSum;
        cnt -= rightSum;
        ans= min(cnt, ans);


    }
    cout<<ans<<"\n";
    




    return 0;
}