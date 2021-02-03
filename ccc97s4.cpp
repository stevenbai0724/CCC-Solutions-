//
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin>>t;
    string wer; getline(cin, wer);
    while(t--){

        vector<string>arr;
        vector<bool>br(10000, false);
        map<string, int>m;
        while(true){
            string s; 
            getline(cin, s);
            if(s=="")break;

            string temp = "";
            int n = s.length();
            for(int i=0;i<n;i++){
                if(s[i]==' '){
                    arr.push_back(temp);
                    temp = "";
                }
                else temp+=s[i]; 
                if(i==n-1){
                    arr.push_back(temp);  
                    int ind = arr.size()-1;
                    br[ind] = true;
                    temp = ""; 
                
                }
            }
        }
        int cnt = 1;
        for(int i=0;i<arr.size();i++){

            string nxt = arr[i];

            if(m[nxt] == 0){
                m[nxt] = cnt;
                cnt++;
                cout<<arr[i];
            }
            else{
                cout<<m[nxt];
            }
            if(br[i])cout<<"\n";
            else cout<<" ";
        }
        cout<<"\n";
        

    }


}