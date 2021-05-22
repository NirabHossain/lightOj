#include<bits/stdc++.h>
using namespace std;

map<int,vector<pair<int,int> > >mp;
int mx,vis[30005];

void dfs(int i,int ic){
    if(mx<ic)mx=ic;vis[i]=true;
    for(int j=0;j<mp[i].size();j++){
        int x=mp[i][j].first,y=mp[i][j].second;
        if(!vis[x]){vis[x]=true;dfs(x,ic+y);}
    }
}


int main()
{
    int i,j,t,T=1,n,u,v,w;
    for(scanf("%d",&t);t--;){
        scanf("%d",&n);
        for(i=1;i<n;i++){
            scanf("%d %d %d",&u,&v,&w);
            mp[u].push_back(make_pair(v,w));
            mp[v].push_back(make_pair(u,w));
        }
        printf("Case %d:\n",T++);
        for(i=0;i<n;i++){
            memset(vis,0,sizeof vis);
            mx=0;
            dfs(i,0);
            printf("%d\n",mx);
        }
        mp.clear();
    }
}
/*

1
5
0 2 20
2 1 10
0 3 29
0 4 50


*/
