#include<bits/stdc++.h>
using namespace std;

int a[50005],track[50005],vis[50005],n;
vector<int>adj[50005];

void bfs(int u, int ed){
    int i,j,x,y;
    for(i=1;i<=50001;i++){
        sort(adj[i].begin(),adj[i].end());//Lexicographic
        track[i]=i;vis[i]=0;
    }
    queue<int>q;q.push(u);vis[u]=1;
    while(!q.empty()){
        i=q.front();q.pop();
        if(i==ed){for(j=1;j<=50001;j++)adj[j].clear();return;}
        for(j=0;j<adj[i].size();j++)if(vis[adj[i][j]]==0){
            x=adj[i][j];vis[x]=1;track[x]=i;
            q.push(x);
        }
    }
}

void dfs(int u){
    if(u==track[u]){cout<<u;return;}
    dfs(track[u]);cout<<" "<<u;
}

int main()
{
    int i,j,t,T=1;
    for(cin>>t;t--;){cout<<"Case "<<T++<<":\n";
        cin>>n;
        for(i=1;i<=n;i++)cin>>a[i];
        for(j=2;j<=n;j++){
            adj[a[j]].push_back(a[j-1]);
            adj[a[j-1]].push_back(a[j]);
        }
        bfs(a[1],a[n]);
        dfs(a[n]);//To print the answer.
        cout<<endl;
    }
}
/*
2

6

1 2 3 4 1 3

5

4 2 6 3 1
*/
