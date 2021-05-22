#include<bits/stdc++.h>
using namespace std;

const int N=55,dx[]={1,-1,0,0},dy[]={0,0,1,-1};
char inp[N][N];
bool vis[N][N],taken[N];
int m,n;

void bfs(char match)
{
    memset(vis,0,sizeof vis);
    queue<pair<int,int> >q;
    for(int i=0;i<n;i++){
        if(inp[i][0]!=match){
            vis[i][0]=true;
            q.push(make_pair(i,0));
        }
        if(inp[i][m-1]!=match){
            vis[i][m-1]=true;
            q.push(make_pair(i,m-1));
        }
    }
    for(int i=0;i<m;i++){
        if(inp[0][i]!=match){
            vis[0][i]=true;
            q.push(make_pair(0,i));
        }
        if(inp[n-1][i]!=match){
            vis[n-1][i]=true;
            q.push(make_pair(n-1,i));
        }
    }
    while(!q.empty()){
        int gx=q.front().first,gy=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int x=gx+dx[i],y=gy+dy[i];
            if(x<0||x>=n||y<0||y>=m||vis[x][y]||match==inp[x][y])continue;
            vis[x][y]=true;
            q.push(make_pair(x,y));
        }
    }
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)
            if(!vis[i][j])inp[i][j]=match;
}

int main()
{
    int t,T=1;
    for(cin>>t;t--;){
        cin>>n>>m;
        for(int i=0;i<n;i++)scanf("%s",inp[i]);
        memset(taken,0,sizeof taken);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(inp[i][j]!='.'&&taken[inp[i][j]-'A']==0)
                {
                    taken[inp[i][j] - 'A'] = 1 ;
                    bfs(inp[i][j]);
                }
            }
        }
        printf("Case %d:\n",T++);
        for(int i=0;i<n;i++)printf("%s\n",inp[i]);
    }
}
