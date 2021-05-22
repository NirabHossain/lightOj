#include<bits/stdc++.h>
using namespace std;
const int N=23,a[]={0,0,-1,1},b[]={-1,1,0,0};
int w,h,ic;
char grid[N][N];

void floodfill(int r, int c)
{
    if(r<0||r>=h||c<0||c>=w)return;
    if(grid[r][c]!='.')return;
    ic++;
    grid[r][c]='#';
    for(int i=0;i<4;++i)floodfill(r+a[i],c+b[i]);
}

int main()
{
    int t,i1,j1,cs;
    cin>>t;cs=0;
    while(t--){
        cin>>w>>h;
        for(int i=0;i<h;i++)for(int j=0;j<w;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='@')i1=i,j1=j;
        }
        ic=0;
        grid[i1][j1]='.';
        floodfill(i1,j1);
        cout<<"Case "<<++cs<<": "<<ic<<endl;

    }
}
