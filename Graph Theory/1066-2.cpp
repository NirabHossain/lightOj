#include<bits/stdc++.h>
using namespace std;
struct Node{int i,j,ic;};
int k,n;
char a[20][20];

Node bfs(char target, Node start)
{
    Node temp,epic;
    int X[]={1,0,-1,0},Y[]={0,1,0,-1},v[20][20];
    queue<Node>q;
    memset(v,0,sizeof v);
    q.push(start);
    while(!q.empty()){
        temp=q.front();
        q.pop();
        int x1=temp.i,y1=temp.j;
        if(a[x1][y1]==target)return temp;
        for(int i=0;i<4;i++){
            int x=x1+X[i],y=y1+Y[i];
            if(x>=0&&x<n&&y<n&&y>=0 && (a[x][y]=='.'||a[x][y]==target)&&v[x][y]==0){
                epic.ic=temp.ic+1;
                cout<<epic.ic<<endl;
                epic.i=x, epic.j=y;
                v[x][y]=1;
                q.push(epic);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
    }
    temp.ic=INT_MAX;
    return temp;
}

int main()
{
    int m,ic,cs=0,t,sum,i,j,i1,j1;
    char target;
    Node nod;
    for(cin>>t;t--;){
        cin>>n;
        for(i=0,k=-999,sum=0;i<n;i++)for(j=0;j<n;j++){
            cin>>a[i][j];
            k=max(k,a[i][j]-'A'+1);
            if(a[i][j]=='A')i1=i,j1=j;
        }
        nod.i=i1,nod.j=j1;
        for(i=0;i<k;i++){
            nod.ic=0;
            target='A'+i;
            nod=bfs(target,nod);
            if(nod.ic==INT_MAX)break;
            a[nod.i][nod.j]='.';
            sum+=nod.ic;
        }
        i==k?cout<<"Case "<<++cs<<": "<<sum<<endl:cout<<"Case "<<++cs<<": Impossible\n";
    }
}
/*
4

5
A....
####.
..B..
.####
C.DE.

2
AC
.B

2
A#
#B

3
A.C
##.
B..
*/
