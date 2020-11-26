#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    vector<vector<int>>adj(8);  //if y is in adj[x], x must be done before task y
    vector<int>indegree(8); //indegree of takes, in other words the number of tasks needed to be done before
    vector<int>q;   //order of tasks

    adj[1].push_back(7); 
    adj[1].push_back(4);
    adj[2].push_back(1);
    adj[3].push_back(4);
    adj[3].push_back(5);
    indegree[7] = 1;
    indegree[4] = 2;
    indegree[1] = 1;
    indegree[5] = 1;
    while(true){
        int x, y;
        cin >>x >>y;

        if(x==0 && y==0) break;

        adj[x].push_back(y);
        indegree[y]++;

    }
    while(true){
        bool yes = true;
        
        for(int i = 1; i<=7; i++){
            if(indegree[i] == 0){
                yes = false;
                q.push_back(i);
                for(int j =0 ; j<adj[i].size(); j++){
                    indegree[adj[i].at(j)]--;
                }

                indegree[i]--;
                break;

            }
        }
        if(yes){
            cout<<"Cannot complete these tasks. Going to bed."<<"\n";
            break;
        }
        if(q.size()==7) break;

    }
    if(q.size()==7){
        for(int i = 0; i<7; i++){
            cout<<q.at(i)<<" ";
        }
    }

    return 0;
}