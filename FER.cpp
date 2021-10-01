#include<bits/stdc++.h>
using namespace std;
vector <int> adj[1001];
bool visited[1001];
int cc_nodes;
void dsf(int node){
cc_nodes++;
visited[node]=1;
for(int i=0;i<adj[node].size();i++){
    int child = adj[node][i];
    if(visited[child]==0){

        dsf(child);
    }
}
}

int main(){
    int t;
    cin>>t;
    while(t){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<=n;i++){
        visited[i]=0,adj[i].clear();
        }
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

       int cc_count=0,res=1;

       for(int i=1;i<=n;i++){
        if(visited[i]==0){
            cc_nodes=0;
            dsf(i);
            cc_count++;
            res=(res*cc_nodes)%1000000007;
        }
       }
        cout<<res<<" "<<cc_count<<endl;
       t--;
    }
}
