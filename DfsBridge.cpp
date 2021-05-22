#include<bits/stdc++.h>
using namespace std;

int r,c,dx[]={1,0,-1,0},dy[]={0,1,0,-1};
bool vis[20][20],flag;
char ch[20][20];

bool dfs(int u, int v)/// Bridge Problem done
{
    vis[u][v]=true;
    for(int i=0;i<4;i++){
        int x=u+dx[i],y=v+dy[i];
        if(ch[x][y]=='L')return true;
        if(!vis[x][y]&&ch[x][y]=='R' && dfs(x,y)){
            return true;
            ch[u][v]='*';
        }
    }
    return false;
}

int main()
{
    int i,j,p,q;
    for(cin>>r>>c,i=0;i<r;i++){
        cin>>ch[i];
        for(j=0;j<c;j++)if(ch[i][j]=='P')p=i,q=j;
    }
    flag=true;
    memset(vis,0,sizeof vis);
    if(dfs(p,q))
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)cout<<vis[i][j];
            cout<<endl;
        }
}


/*
8 9
#########
#...#RRR#
#...#R.R#
#.RRRR.R#
#.R.#..R#
#PR.#.RR#
#...#.L.#
#########



*/
