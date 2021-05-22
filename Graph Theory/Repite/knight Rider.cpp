#include<bits/stdc++.h>
using namespace std;

const int N=12,dx[]={1,1,2,2,-1,-1,-2,-2},
               dy[]={2,-2,1,-1,2,-2,1,-1};
char c[N][N];
bool b[N][N];
int m,n,v[N][N];
struct point{int a,b,c,k;};
queue<point>q;
void bfs()
{
    point p1;
    int ic=1;
    memset(b,0,sizeof b);
    while(!q.empty()){
        p1=q.front();
        int x1=p1.a,y1=p1.b;b[x1][y1]=true;
        q.pop();
        for(int i=0;i<8;i++){
            int x=x1+dx[i],y=y1+dy[i],z=p1.c;
            if(x<0||x>=m||y<0||y<0||y>=n||b[x][y])continue;
            b[x][y]=true;
            cout<<p1.c<<" "<<ic<<" "<<p1.k<<endl;
            p1.a=x,p1.b=y,p1.c=z;
            q.push(p1);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl<<endl;
    }
}

int main()
{
    int t,T=1,i,j;
    point p;
    for(cin>>t;t--;){
        cin>>m>>n;
        for(i=0;i<m;i++)cin>>c[i];
        memset(v,0,sizeof v);
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(c[i][j]!='.'){
                    p.a=i,p.b=j,p.k=c[i][j]-'0',p.c=1;
                    q.push(p);
                    bfs();
                }
            }
        }

    }
}
/*


1

8 8

........
........
........
........
....2...
........
........
........

************

8



3 2
..
2.
..

3 3
1.1
...
..1

10 10
..........
.2....2...
......2...
1.........
...2.1....
...1......
..........
.......21.
..........
..........

1 4
1..1


8 8
........
........
........
........
....3...
........
........
........



*/
