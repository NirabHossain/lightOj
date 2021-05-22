#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100005];
long long int nf,ds,n;
bool vis[100005];

void dfs(int u){
    vis[u]=true,ds++;
    for(int i=0;i<adj[u].size();i++){
        int v=adj[u][i];
        if(!vis[v])dfs(v);
    }
    nf+=(n-ds);
}

int main()
{
    int t,T=1,i,j,u,v;
    for(cin>>t;t--;){
        cin>>n;
        memset(vis,0,sizeof vis);
        for(i=0;i<=n;i++)adj[i].clear();
        for(i=1;i<n;i++){
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        nf=ds=0;
        dfs(1);
        cout<<"Case "<<T++<<": "<<n-1<<" "<<nf<<endl;
    }
}
