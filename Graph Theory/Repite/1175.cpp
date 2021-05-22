#include<bits/stdc++.h>
using namespace std;
int r,c,v[201][201],dx[]={1,-1,0,0},dy[]={0,0,1,-1};
bool vis[201][201],bt;
char ch[201][201];
struct Node{int a,b,ic;};
queue<Node>q;

int bfs(){
    memset(vis,0,sizeof vis);
    Node node;
    while(!q.empty()){
        int x1=q.front().a,y1=q.front().b,z=q.front().ic+1;
        if(bt==1&& (x1==r-1||y1==c-1||x1==0||y1==0))return z-1;
        q.pop();
        for(int i=0;i<4;i++){
            int x=x1+dx[i],y=y1+dy[i];
            if(vis[x][y]||x<0||x>=r||y<0||y>=c||ch[x][y]!='.'||(bt==1 && z>=v[x][y] && v[x][y]!=0))continue;
            if(bt==1&& (x==r-1||y==c-1||x==0||y==0))return z;

            vis[x][y]=true;v[x][y]=z;
            node.a=x,node.b=y,node.ic=z;
            q.push(node);
        }
    }
    return -1;
}

int main()
{
    int i,j,t,T=1,k,r1,c1,r2,c2;
    Node node;
    for(cin>>t;t--;){
        memset(v,0,sizeof v);
        cin>>r>>c;
        for(i=0,bt=0,r2=c2=-1;i<r;i++){
            cin>>ch[i];
            for(j=0;j<c;j++){
                if(ch[i][j]=='J')r1=i,c1=j;
                if(ch[i][j]=='F'){
                    v[i][j]=1;
                    node.a=i,node.b=j,node.ic=1;
                    q.push(node);
                }
            }
        }
        bfs();
        bt=1;v[r1][c1]=1;
        node.a=r1,node.b=c1,node.ic=1;
        q.push(node);
        k=bfs();
        if(k==-1)printf("Case %d: IMPOSSIBLE\n",T++);
        else printf("Case %d: %d\n",T++,k);
    }
}
/*
2
4 5
##.##
#JF.#
#...#
#...#

3 3
###
#J.
#.F

8
4 3
###
#J#
FFF
FFF
3 3
###
#J#
#.#
5 7
.......
.....J.
.......
.......
.......
3 8
.......F
....J...
.##F.#..
3 6
.F.#.F
#F..J#
.F#..F
9 9
....F....
.........
.........
.........
....J....
.........
.........
.........
....F....
15 20
F..#################
..................J#
...................#
...................#
...................#
...................#
...................#
...................#
...................#
...................#
...................#
...................#
...................#
...................#
...................#
2 4
FFFF
JFFF

Case 1: IMPOSSIBLE
Case 2: 2
Case 3: 2
Case 4: 2
Case 5: IMPOSSIBLE
Case 6: 5
Case 7: 14
Case 8: 1

*/



