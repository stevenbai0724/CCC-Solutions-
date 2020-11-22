#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;cin>>n;

    vector<int>arr(101);

    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    while(true){
        int k;cin>>k;
        if(k ==77) break;


        if(k==99){ //spliting
            int s, p;  //stream number and percent 
            cin>>s>>p;
            int sl = arr[s]*(p/100.0); //new left stream
            int sr = arr[s]-sl;   //new right stream

            for(int i =100;i>s+1; i--){
                arr[i] = arr[i-1];
            }
            arr[s] = sl;
            arr[s+1] = sr;
            
        }
        if(k==88){
            int j;cin>>j; //stream j is joined to j+1
            arr[j] += arr[j+1];
            for(int i = j+1; i<100;i++){
                arr[i] = arr[i+1];
            }
        }
    }
    for(int i=1; i<=100;i++){
        if(arr[i]!=0)cout<<arr[i]<<" ";
    }
    return 0;

}