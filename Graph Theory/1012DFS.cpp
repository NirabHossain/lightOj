#include<bits/stdc++.h>
using namespace std;
const int N=21,X[]={1,-1,0,0},Y[]={0,0,1,-1};
char c[N][N];
int w,h,ic;

void dfs(int x,int y){
    if(x<0||x>=h||y<0||y>=w||c[x][y]=='#')return;
    c[x][y]='#',ic++;
    for(int i=0;i<4;i++)dfs(x+X[i],y+Y[i]);
}

int main()
{
    int i,j,k,t=0,T,m,n;
    for(cin>>T;T--;){
        cin>>w>>h;
        for(i=0;i<h;i++){
            cin>>c[i];
            for(j=0;j<w;j++)if(c[i][j]=='@'){
                m=i,n=j;
                break;
            }
        }
        ic=0;
        dfs(m,n);
        cout<<"Case "<<++t<<": "<<ic<<endl;
    }
}
