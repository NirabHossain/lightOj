#include<bits/stdc++.h>
using namespace std;
const int N=12,X[]={1,-1,0,0},Y[]={0,0,1,-1};
int v[N][N],g[N][N],sum,n,r,c,m;
char ch[N][N];
struct Node{int a,b,ic;};

void bfs(Node node1)
{
    queue<Node>q;
    q.push(node1);
    Node temp,node;
    memset(v,0,sizeof v);
    while(!q.empty()){
        node=q.front();
        int x1=node.a,y1=node.b;
        q.pop();
        for(int i=0;i<4;i++){
            int x=x1+X[i],y=y1+Y[i];
            if(ch[x][y]=='A'+m){
                r=x,c=y,sum=node.ic+1,ch[x][y]='.';
                return;
            }
            if(x>=0&&x<n&&y>=0&&y<n&&v[x][y]==0&&ch[x][y]=='.'){
                v[x][y]=1;
                temp.a=x;temp.b=y;temp.ic=node.ic+1;
                q.push(temp);
            }
        }
    }

    sum=INT_MAX;
}

int main()
{
    int t=1,T,j,i,k;
    Node node;
    for(cin>>T;T--;){
        cin>>n;
        for(i=0,k=-999;i<n;i++){
            cin>>ch[i];
            for(j=0;j<n;j++){
                if(ch[i][j]=='A')r=i,c=j;
                k=max(k,(ch[i][j]+1-'A'));
            }
        }
        sum=0;
        for(m=1;m<k;m++){
            node.a=r,node.b=c,node.ic=sum,ch[r][c]='.';
            if(sum==INT_MAX)break;
            bfs(node);
        }
        sum==INT_MAX?printf("Case %d: Impossible\n",t++):printf("Case %d: %d\n",t++,sum);
    }
}
// 1 4 .ID# GA.. H#E. FC.B
