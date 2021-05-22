#include<bits/stdc++.h>
#define M (2*8000+1)
using namespace std;

vector<int> adj[M],rev[M],order,res;
int comp[M],m,n;
bool vis[M];

int value(int x){
    if(x>0)return 2*(--x);
    else return -2*(x+1)+1;
}
int topo(int u){
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)if(!vis[adj[u][i]])topo(adj[u][i]);
    order.push_back(u);
}
int scc(int u, int col){
    comp[u]=col;
    for(int i=0;i<rev[u].size();i++)if(comp[rev[u][i]]==-1)scc(rev[u][i],col);
}
bool twosat(){
    for(int i=0;i<2*n;i+=2)if(comp[i]==comp[i+1])return false;
    return true;
}

int main()
{
    int i,j,x,y,t,T=1,cnt;/// ^ operator er use sikhte hobe
    for(cin>>t;t--;){
        cin>>m>>n;
        for(i=0;i<2*n+1;i++){
            vis[i]=0;comp[i]=-1;
            adj[i].clear();rev[i].clear();
        }
        while(m--){
            cin>>x>>y;
            x=value(x),y=value(y);
            adj[x^1].push_back(y);adj[y^1].push_back(x);
            rev[x].push_back(y^1);rev[y].push_back(x^1);
        }

        order.clear();cnt=0;
        for(i=0;i<2*n;i++)if(!vis[i])topo(i);
        reverse(order.begin(),order.end());
        for(i=0;i<order.size();i++)if(comp[order[i]]==-1)scc(order[i],cnt++);
        if(!twosat())printf("Case %d: No\n",T++);
        else{
            res.clear();printf("Case %d: Yes\n",T++);
            for(i=0;i<2*n+1;i+=2)if(comp[i]>comp[i+1])res.push_back(i/2);
            printf("%d",res.size());
            for(i=0;i<res.size();++i)printf(" %d",res[i]+1);cout<<"\n";
        }
    }
}
