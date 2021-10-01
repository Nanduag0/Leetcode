#include<bits/stdc++.h>
using namespace std;
vector <int> adj[1000];
int in[1001],out[1001];
bool visited[1001];
int timer=1;
void dfs(int node){
    visited[node]=1;
    in[node]=timer;
    timer++;
    for(int i=0;i<adj[node].size();i++){
        int child = adj[node][i];
        if(visited[child]==0)
            dfs(child);
    }
    out[node]=timer++;
}


int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    for(int i=1;i<=n;i++){
        cout<<"For node "<<i<<" : In -->"<<in[i]<<" and Out -->"<<out[i]<<endl;
    }
}
