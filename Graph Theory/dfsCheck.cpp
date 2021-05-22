#include<bits/stdc++.h>
using namespace std;

int r,c,dx[]={1,-1,0,0},dy[]={0,0,1,-1},vis[30][30];
char ch[20][20];

void dfs(int x1,int y1)
{
    for(int i=0;i<4;i++){
        int x=x1+dx[i],y=y1+dy[i];
        if(ch[x][y]=='*')return;
        if(ch[x][y]=='.'){
            ch[x][y]='#';
            dfs(x,y);
            vis[x][y]=1;
            for(int i1=0;i1<r;i1++){for(int j=0;j<c;j++)cout<<ch[i1][j]<<" ";cout<<'\n';}cout<<endl;
        }
    }
}

int main()
{
    int i,t,T=1,j,i1,j1;
    for(cin>>t;t--;){
        for(i=0,cin>>r>>c;i<r;i++){
            cin>>ch[i];
            for(j=0;j<c;j++)if(ch[i][j]=='P')i1=i,j1=j;
        }
        memset(vis,0,sizeof vis);
        dfs(i1,j1);
    }
}
/*
1 9 14
##############
#.....*###...#
#.......#....#
#.......#....#
#.......#....#
#.......#....#
#......P.....#
#.......#....#
##############
*/
