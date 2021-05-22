#include<bits/stdc++.h>
using namespace std;

const int dx[]={1,-1,0,0},dy[]={0,0,1,-1},N=201;
char ch[N][N];
bool vis[N][N],bt;
int r,c,ic;
struct Node{int a,b,c;} node;

int bfsTP(int u, int v){
    queue<Node>q;
    node.a=u,node.b=v,node.c=0;
    q.push(node);
    while(!q.empty()){
        int x1=q.front().a,y1=q.front().b,z=q.front().c;
        q.pop();
        for(int i=0;i<4;i++){
            int x=x1+dx[i],y=y1+dy[i];
            if(ch[x][y]=='#'||vis[x][y]||(bt&&ch[x][y]=='*'))continue;
            if(ch[x][y]=='D'){ic=-2;return z+1;}
            vis[x][y]=true;
            //for(int j=0;j<r;j++){for(int j1=0;j1<c;j1++)cout<<vis[j][j1]<<" ";cout<<endl;}cout<<endl;
            if(!bt&&ch[x][y]=='*')return z+1;
            node.a=x,node.b=y,node.c=z+1;
            q.push(node);
        }
    }
    return -1;
}

int bfs(int u, int v){
    queue<Node>q;
    node.a=u,node.b=v,node.c=0;
    q.push(node);
    while(!q.empty()){
        int x1=q.front().a,y1=q.front().b,z=q.front().c;
        q.pop();
        for(int i=0;i<4;i++){
            int x=x1+dx[i],y=y1+dy[i];
            if(ch[x][y]=='#'||vis[x][y])continue;
            if(ch[x][y]=='D')return z+1;
            vis[x][y]=true;
            //for(int j=0;j<r;j++){for(int j1=0;j1<c;j1++)cout<<vis[j][j1]<<" ";cout<<endl;}cout<<endl;
            if(ch[x][y]=='*') node.c=z+3;
            else node.c=z+1;
            node.a=x,node.b=y;
            q.push(node);
        }
    }
    return -1;
}

int main()
{
    int i,j,t,T=1,u1,v1,u2,v2,m1,m2,n1,n2,n3,ans,star,n4;
    for(cin>>t;t--;){
        cin>>r>>c;
        for(i=0,star=0;i<r;i++){
            cin>>ch[i];
            for(j=0;j<c;j++){
                if(ch[i][j]=='P')u1=i,v1=j;
                if(ch[i][j]=='D')u2=i,v2=j;
                if(ch[i][j]=='*')star++;
            }
        }
        memset(vis,0,sizeof vis);ic=-1,bt=0,ans=INT_MAX;
        vis[u1][v1]=1;m1=bfsTP(u1,v1);
        if(ic==-2){cout<<"Case "<<T++<<": "<<m1<<endl;continue;}
        if(m1<0){cout<<"Case "<<T++<<": impossible\n";continue;}
        vis[u2][v2]=1;m2=bfsTP(u2,v2);
        if(m1>0 && m2>0)ans=m1+m2+1;

        memset(vis,0,sizeof vis);
        vis[u2][v2]=1;n1=bfsTP(u2,v2);
        vis[u1][v1]=1;n2=bfsTP(u1,v1);
        if(n1>0 && n2>0)ans=min(ans,n1+n2+1);

        bt=1;memset(vis,0,sizeof vis);
        vis[u1][v1]=1;n3=bfsTP(u1,v1);
        if(n3>0)ans=min(ans,n3);

        if(star>1){
            memset(vis,0,sizeof vis);
            vis[u1][v1]=1;n4=bfs(u1,v1);
            if(n4>0)ans=min(ans,n4);
        }

        ans==INT_MAX?cout<<"Case "<<T++<<": impossible\n":cout<<"Case "<<T++<<": "<<ans<<endl;
    }
}
/*



4 11 10
##########
#*#.....D#
###.###.##
#...#.#..#
#.....##.#
#####*####
#........#
#........#
#........#
#P.......#
##########


4 10
##########
#.P..#*..#
#*......D#
##########

3 9
#########
#P.#..D.#
#########



3 13
#############
#*......P*.D#
#############

Case 1: 21
Case 2: 6
Case 3: impossible
Case 4: 5

*/
