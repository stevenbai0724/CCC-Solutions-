//
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

#define int long long
#define string std::string
const int mod = 1e9 + 7;

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    vector<string>dir;
    vector<string>street;

    while(true){
        string s,t;
        cin>>s>>t;
        
        if(s=="R")dir.push_back("LEFT");
        else dir.push_back("RIGHT");

        if(t=="SCHOOL")break;
        street.push_back(t);

    }
    reverse(dir.begin(), dir.end());
    reverse(street.begin(), street.end());

    for(int i=0;i<street.size();i++){
        cout<<"Turn "<<dir[i]<<" onto "<<street[i]<<" street.\n";
    }
    cout<<"Turn "<<dir[dir.size()-1]<<" into your HOME.\n";


    return 0;
}