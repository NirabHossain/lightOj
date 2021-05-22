#include<bits/stdc++.h>
using namespace std;
template<class T>inline bool read(T &x){int c=getchar();int sgn=1;while(~c&&c<'0'||c>'9'){if(c=='-')sgn=-1;c=getchar();}for(x=0;~c&&'0'<=c&&c<='9';c=getchar())x=x*10+c-'0'; x*=sgn; return ~c;}

int vis[105][105][105],m,n,a[102][102];

int dfs(int c1, int r1, int c2, int r2){
    if(r1>=m||r2>=m||c1>=n||c2>=n||(r1==c1 && r2==c2))return 0;
    int ret= vis[r1][c1][r2];
    if(ret!=-1)return vis[r1][c1][r2];
    ret=0;
    ret=max(ret, dfs(r1+1,c1,r2+1,c2));
    ret=max(ret, dfs(r1+1,c1,r2,c2+1));
    ret=max(ret, dfs(r1,c1+1,r2+1,c2));
    ret=max(ret, dfs(r1,c1+1,r2,c2+1));

    return vis[r1][c1][r2]=ret+a[r1][c1]+a[r2][c2];
}
int main()
{
    int i,j,t,T=1;
    for(read(t);t--;){
        memset(vis,-1,sizeof vis);
        read(m);read(n);
        for(i=0;i<m;i++)for(j=0;j<n;j++)read(a[i][j]);
        printf("Case %d: %d\n", T++, dfs(0,1,1,0)+a[0][0]+a[m-1][n-1]);
    }
}
/*
1
3 4
1  0  1  1
1  1  1  1
0  1 10  1

*/

