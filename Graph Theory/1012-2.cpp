#include<bits/stdc++.h>
const int n=23;
int w,h,a[]={0,0,-1,1},b[]={1,-1,0,0},ic;
char grid[n][n];
using namespace std;

void dfs(int r, int c){
    if(r<0||r>=h||c<0||c>=w||grid[r][c]!='.')return;
    ic++;grid[r][c]='#';
    for(int k=0;k<4;k++)dfs(r+a[k],c+b[k]);
}
int main()
{
    int i,t,T,j,k,i1,j1;
    cin>>T;t=1;
    while(T--){
        cin>>w>>h;
        for(i=0;i<h;i++)for(j=0;j<w;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='@')i1=i,j1=j,grid[i][j]='.';
        }
        ic=0;
        dfs(i1,j1);
        cout<<"Case "<<t++<<": "<<ic<<endl;
    }
}
