#include<bits/stdc++.h>
#define bd(x,y) ( x>=0 && x<r &&y>=0 && y<c)

using namespace std;

const int X[]={1,-1,0,0},Y[]={0,0,1,-1},N=21;
int ic,r,c;
char v[N][N];

void dfs(int m, int n)
{
    for(int i=0;i<4;i++){
        int x=m+X[i],y=n+Y[i];
        if(!bd(x,y) || v[x][y]=='#')continue;
        ic++;
        v[x][y]='#';
        dfs(x,y);
    }
}

int main()
{
    int t=0,T,i,j,k,i1,j1;
    for(cin>>T;T--;){
        cin>>c>>r;
        for(i=0;i<r;i++){
            cin>>v[i];
            for(j=0;j<c;j++){
                if(v[i][j]=='@')i1=i,j1=j,ic=1,v[i][j]='#';
            }
        }
        dfs(i1,j1);
        printf("Case %d: %d\n",++t,ic);
    }
}
