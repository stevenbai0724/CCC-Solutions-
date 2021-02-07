//https://dmoj.ca/problem/ccc11j4
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;
#define int long long
#define string std::string
const int add  = 600;
signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    vector<vector<bool>>vis(2000, vector<bool>(2000));
    map<char, int>m[2];
    m[0]['l'] = 0;
    m[1]['l'] = -1;
    m[0]['d'] = 1;
    m[1]['d'] = 0;
    m[0]['r'] = 0;
    m[1]['r'] = 1;
    m[0]['u'] = -1;
    m[1]['u'] = 0;
    vis[  1+add][0+add] = true;
    vis[  2+add][0+add] = true;
    vis[  3+add][0+add] = true;
    vis[  3+add][1+add] = true;
    vis[  3+add][2+add] = true;
    vis[  3+add][3+add] = true;
    vis[  4+add][3+add] = true;
    vis[  5+add][3+add] = true;
    vis[  5+add][4+add] = true;
    vis[  5+add][5+add] = true;
    vis[  4+add][5+add] = true;
    vis[  3+add][5+add] = true;
    vis[  3+add][6+add] = true;
    vis[  3+add][7+add] = true;
    vis[  4+add][7+add] = true;
    vis[  5+add][7+add] = true;
    vis[  6+add][7+add] = true;
    vis[  7+add][7+add] = true;
    vis[  7+add][6+add] = true;
    vis[  7+add][5+add] = true;
    vis[  7+add][4+add] = true;
    vis[  7+add][3+add] = true;
    vis[  7+add][2+add] = true;
    vis[  7+add][1+add] = true;
    vis[  7+add][0+add] = true;
    vis[  7+add][-1+add] = true;
    vis[  6+add][-1+add] = true;
    vis[  5+add][-1+add] = true;
    int x = 5+add;
    int y = -1+add;
    while(true){    
        char c; cin>>c;
        int t; cin>>t;
        if(c=='q')return 0;
        bool found = false;
        while(t--){
            x += (m[0][c]);
            y += (m[1][c]);
            if(vis[x][y])found = true;
            vis[x][y] = true;
        }
        if(found){
            cout<<y-add<<" "<<(x-add)*-1<<" DANGER";
            return 0;
        }
        cout<<y-add<<" "<<(x-add)*-1<<" safe\n";

    }



    return 0;
}