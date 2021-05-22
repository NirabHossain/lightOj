#include<bits/stdc++.h>
using namespace std;
const int N=55,dx[]={1,-1,0,0},dy[]={0,0,1,-1};
int m,n,vis[N][N],taken[N];
char c[N][N];


void bfs(char match){
    memset(vis,0,sizeof vis);
    queue<pair<int,int> >q;
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)if(match!=c[i][j]){
        if(i==0)vis[0][j]=1,q.push(make_pair(0,j));
        if(i==m-1)vis[m-1][j]=1,q.push(make_pair(m-1,j));
        if(j==0)vis[i][0]=1,q.push(make_pair(i,0));
        if(j==n-1)vis[i][n-1]=1,q.push(make_pair(i,n-1));
    }
    while(!q.empty()){
        int x1=q.front().first,y1=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int x=x1+dx[i],y=y1+dy[i];
            if(x<0||x>=m||y<0||y<0||y>=n||vis[x][y]==1||match==c[x][y])continue;
            vis[x][y]=1;
            q.push(make_pair(x,y));
        }
    }
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)
        if(vis[i][j]==0)c[i][j]=match;
}

int main()
{
    int t,T=0,i,j;
    for(cin>>t;t--;){
        cin>>m>>n;
        memset(taken,0,sizeof taken);
        for(i=0;i<m;i++)cin>>c[i];
        for(i=0;i<m;i++)for(j=0;j<n;j++){
            if(isalpha(c[i][j])&&taken[c[i][j]-'A']==0){
                taken[c[i][j]-'A']=1;
                bfs(c[i][j]);
            }
        }
        cout<<"Case "<<++T<<":\n";
        for(i=0;i<m;i++)cout<<c[i]<<endl;
    }
}
