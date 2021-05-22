#include<bits/stdc++.h>
using namespace std;
int a[51][51],n;

int dfs(int col,int ret)
{

    for(int i=0;i<n;i++){
        ret=a[col][i];
        dfs()
    }
}

int main()
{
    int i,j,t,T=1,pq;
    for(cin>>t;t--;){
        for(i=0;i<n;i++)for(j=0;j<n;j++)cin>>a[i][j];
        dfs(0,0);
        printf("Case %d: %d\n",T++,pq);
    }
}
