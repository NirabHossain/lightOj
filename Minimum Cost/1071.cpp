#include<bits/stdc++.h>
using namespace std;
int m,n,a[102][102],vis[105][105][105];

int dfs(int r1, int c1, int r2, int c2){
    if(r1>=m||r2>=m||c1>=n||c2>=n||(r1==r2 && c1==c2))return 0;
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
    for(cin>>t;t--;){
        for(cin>>m>>n,i=0;i<m;i++)for(j=0;j<n;j++)cin>>a[i][j];
        memset(vis,-1,sizeof vis);
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
