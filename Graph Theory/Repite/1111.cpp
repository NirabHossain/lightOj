#include<bits/stdc++.h>
using namespace std;
map<int,vector<int> >mp;
bool vis[10004];
int aux[10004];

void dfs(int r){
    vis[r]=1;aux[r]++;
    for(int j=0;j<mp[r].size();j++){
        int x=mp[r][j];
        if(vis[x])continue;
        vis[x]=true;
        dfs(x);
    }
}

int main()
{
    int i,t,T=1,s,k,m,n,j,u,v,a[101];
    queue<int>q;
    for(cin>>t;t--;){
        memset(aux,0,sizeof aux);
        cin>>k>>n>>m;
        for(i=0;i<k;i++)cin>>a[i];
        for(i=0;i<m;i++){
            cin>>u>>v;
            mp[u].push_back(v);
        }
        for(i=0;i<k;i++){
            memset(vis,0,sizeof vis);
            dfs(a[i]);
        }
        for(i=0,s=0;i<=m;i++)if(aux[i]==k)s++;
        mp.clear();
        cout<<"Case "<<T++<<": "<<s<<endl;
    }
}
