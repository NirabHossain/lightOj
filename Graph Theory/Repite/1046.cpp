#include<bits/stdc++.h>
using namespace std;

const int N=12,dx[]={1,1,2,2,-1,-1,-2,-2},dy[]={2,-2,1,-1,2,-2,1,-1};
char c[N][N];
bool b[N][N];
int m,n,v[N][N],k,aux[N][N];
struct point{int a,b,c,ic;};
queue<point>q;
void bfs()
{
    point p1,q1;
    memset(b,0,sizeof b);
    while(!q.empty()){
        p1=q.front();
        int x1=p1.a,y1=p1.b,z=p1.c,k1=p1.ic;
        b[x1][y1]=true;
        aux[x1][y1]++;
        q.pop();
        for(int i=0;i<8;i++){
            int x=x1+dx[i],y=y1+dy[i];
            if(k1==k+1)k1=1,z++;
            if(x<0||x>=m||y<0||y>=n||b[x][y])continue;
            b[x][y]=true;
            v[x][y]=v[x][y]+z;
            q1.a=x,q1.b=y,q1.c=z,q1.ic=k1+1;
            q.push(q1);
        }
    }
}

int main()
{
    int t,T=1,i,j,mx,g1,g2;
    point p;
    for(cin>>t;t--;){
        cin>>m>>n;
        for(i=0;i<m;i++)cin>>c[i];
        memset(v,0,sizeof v);memset(aux,0,sizeof aux);
        for(i=0,g1=0;i<m;i++){
            for(j=0;j<n;j++){
                if(c[i][j]!='.'){
                    p.a=i,p.b=j,k=c[i][j]-'0',p.c=1,p.ic=1;
                    g1++;
                    q.push(p);
                    bfs();
                }
            }
        }
        for(mx=INT_MAX,i=0;i<m;i++)for(j=0;j<n;j++)if(g1==aux[i][j])mx=min(mx,v[i][j]);
        mx==INT_MAX?printf("Case %d: -1\n",T++):printf("Case %d: %d\n",T++,mx);
    }
}
/*
3
2 8
.......1
2.......
3 2
..
..
79
6 2
..
.8
..
2.
4.
..
Case 88: 2
Case 81: 1
Case 63: 1


*/
