#include<bits/stdc++.h>
using namespace std;
int vis[21][21],dx[]={0,0,1,-1},dy[]={1,-1,0,0},r,c,cnt;
char ch[21][21];
struct Node{int a,b,ic;};

void bfs(int a, int b){
    memset(vis,0,sizeof vis);
    Node node;queue<Node>q;
    node.a=a,node.b=b,node.ic=0;
    q.push(node);
    vis[a][b]=true;
    while(!q.empty()){
        int x1=q.front().a,y1=q.front().b,z=q.front().ic+1;
        q.pop();
        for(int i=0;i<4;i++){
            int x=x1+dx[i],y=y1+dy[i];
            if(vis[x][y]||ch[x][y]=='#'||ch[x][y]=='m'||x<0||x>=r||y<0||y>=c)continue;
            vis[x][y]=true;
            if(ch[x][y]=='h'){cnt=max(cnt,z);return;}
            node.a=x,node.b=y,node.ic=z;
            q.push(node);
        }
/*        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<vis[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;*/
    }
}

int main()
{
    int i,j,t,T=1,m,n,a1,a2,b1,b2,c1,c2;
    for(cin>>t;t--;){
        cin>>r>>c;
        for(i=0,cnt=INT_MIN;i<r;i++){
            cin>>ch[i];
            for(j=0;j<c;j++){
                if(ch[i][j]=='a')a1=i,a2=j;
                if(ch[i][j]=='b')b1=i,b2=j;
                if(ch[i][j]=='c')c1=i,c2=j;
            }
        }
        bfs(a1,a2);bfs(b1,b2);bfs(c1,c2);
        cout<<"Case "<<T++<<": "<<cnt<<endl;
    }

}

/*
2
6 8
########
#...c..#
#......#
#.a.h.b#
#......#
########
5 9
#########
#mmm...a#
#mc.h####
#m....b.#
#########
*/
