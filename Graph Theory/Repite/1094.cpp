#include<bits/stdc++.h>
using namespace std;
vector<vector<pair<int,int> > >g(30005);
bool vis[30005];
int st,mx;

int dfs(int i,int node){
    if(mx<node)mx=node,st=i;
    for(int j=0;j<g[i].size();j++){
        int x=g[i][j].first,w=g[i][j].second;
        if(!vis[x])vis[x]=true,dfs(x,node+w);
    }
}

int main()
{
    int t,T=1,i,n,u,v,w;
    for(cin>>t;t--;){
        cin>>n;
        for(i=1;i<n;i++){
            cin>>u>>v>>w;
            g[u].push_back(make_pair(v,w));
            g[v].push_back(make_pair(u,w));
        }
        for(i=0,st=0,mx=INT_MIN;i<2;i++){
            memset(vis,0,sizeof vis);
            vis[st]=1;
            dfs(st,0);
        }
        cout<<"Case "<<T++<<": "<<mx<<endl;
        for(i=0;i<30004;i++)g[i].clear();
    }
}
