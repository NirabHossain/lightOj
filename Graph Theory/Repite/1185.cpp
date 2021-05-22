#include<bits/stdc++.h>
using namespace std;
map<int, vector<int>  >g;
bool vis[101][3];//Double visit(odd/even) should have been given to each city.

int dfs(int i,int node){
    if(node!=-1)vis[i][node]=true;
    int color=1;if(node==1)color=2;
    for(int j=0;j<g[i].size();j++){
        int x=g[i][j];
        if(!vis[x][color])vis[x][color]=true,dfs(x,color);
    }
}

int main()
{
    int t,T=1,i,j,n,u,v,m,mx;
    for(cin>>t;t--;){
        cin>>n>>m;
        for(i=0;i<m;i++){
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        memset(vis,0,sizeof vis);
        dfs(1,-1);
        for(u=1,mx=0;u<=n;u++)if(vis[u][2])mx++;
        cout<<"Case "<<T++<<": "<<mx<<endl;
        g.clear();
    }
}
/*
2

4 3
1 2
2 3
3 4
5 4
1 2
2 3
1 3
3 4
*/
