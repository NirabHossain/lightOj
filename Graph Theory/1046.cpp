#include<bits/stdc++.h>
using namespace std;
const int p=8;
int m=8,n=8,X[]={1,1,2,2,-1,-1,-2,-2},Y[]={2,-2,1,-1,2,-2,1,-1},f[p][p];
string c[]={"........","........","........","....1...","........","........","........","........"};
queue<pair<int,int> >q;

void bfs(int r1, int r2)
{
    memset(f,-1,sizeof f);
    q.push(make_pair(r1,r2));
    f[r1][r2]=0;
    while(!q.empty()){
        int x=q.front().first,y=q.front().second;
        c[x][y]='@';
        cout<<x+1<<" "<<y+1<<endl;
        q.pop();
        for(int i=0;i<8;i++){
            int gx=x+X[i],gy=y+Y[i];
            if(gx<0||gx>=m||gy<0||gy>=n||f[gx][gy]!=-1)continue;
            c[gx][gy]='*';
            f[gx][gy]=f[x][y]+1;
            q.push(make_pair(gx,gy));
        }
            for(int j1=0;j1<8;j1++){
                for(int j2=0;j2<8;j2++){
                    cout<<c[j1][j2]<<" ";
                }
                cout<<endl;
            }

    }
    cout<<endl;
}
int main()
{
    int i1,j1,i,j;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<c[i][j];
            if(c[i][j]=='1')i1=i,j1=j;
        }
        cout<<endl;
    }
    cout<<i1<<" "<<j1<<endl<<endl;
    bfs(i1,j1);
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            cout<<f[i][j]<<" ";
        }
        cout<<endl;
    }
}
