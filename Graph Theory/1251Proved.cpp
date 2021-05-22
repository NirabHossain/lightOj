#include<bits/stdc++.h>
#define mx 16005
#define pb push_back
using namespace std;
int m,n,comp[mx];
vector<int>adj[mx],rev[mx],order,res;
bool vis[mx];

int value(int x){
    if(x<0) return 2*(-x-1)+1;
    return 2*(x-1);
}

void topo(int u){
    vis[u]=1;
    int i;
    for(i=0;i<adj[u].size();i++){
        int v=adj[u][i];
        if(!vis[v])topo(v);
    }
    order.push_back(u);
}


void scc(int u,int col)
{
       comp[u]=col;
       int i;
       for(i=0;i<rev[u].size();i++)
       {
              int v=rev[u][i];
              if(comp[v]==-1)scc(v,col);
       }
}
bool twosat(){
    int i;
    for(i=0;i<2*n;i+=2)if(comp[i]==comp[i+1])return false;
    return true;
}

int main()
{
    int cs,t,i;
    scanf("%d",&t);
    for(cs=1;cs<=t;cs++)
    {
           scanf("%d %d",&m,&n);
           for(i=0;i<=2*n+1;i++)
           {      vis[i]=0;
                  comp[i]=-1;
                  adj[i].clear();
                  rev[i].clear();
           }
           while(m--)
           {
                  int x,y;
                  scanf("%d %d",&x,&y);
                  x=value(x);
                  y=value(y);
                  adj[x^1].pb(y);
                  adj[y^1].pb(x);
                  rev[x].pb(y^1);
                  rev[y].pb(x^1);
           }
           order.clear();
           for(i=0;i<2*n;i++) if(!vis[i]) topo(i);
           int cnt=0;
           reverse(order.begin(),order.end());
           for(i=0;i<order.size();i++)
              if(comp[order[i]]==-1)  scc(order[i],cnt++);
          if(!twosat())
          {
                printf("Case %d: No\n",cs);
          }
          else
          {
                 res.clear();
                 printf("Case %d: Yes\n",cs);
                 for(i=0;i<2*n;i+=2)if(comp[i]>comp[i+1]) res.pb(i/2);
                     printf("%d",res.size());
                 for(i=0;i<res.size();++i) printf(" %d",res[i]+1);
                 puts("");
          }
    }
}

//3 4 3 +1 +3 +2 -1 +2 -3 -1 -2 4 2 +1 -2 +1 +2 -1 -2 -1 +2 1 3 +1 -3


