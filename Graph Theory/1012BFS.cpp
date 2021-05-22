#include<bits/stdc++.h>
using namespace std;
const int N=21,X[]={1,-1,0,0},Y[]={0,0,1,-1};
char c[N][N];
int w,h,ic;
queue<pair<int,int> >q;

void bfs(){
    while(!q.empty()){
        int x=q.front().first,y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int gx=x+X[i],gy=y+Y[i];
            if(gx<0||gx>=h||gy<0||gy>=w||c[gx][gy]=='#')continue;
            ic++;c[gx][gy]='#';
            q.push(make_pair(gx,gy));
        }
    }
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
        ic=0;q.push(make_pair(m,n));
        bfs();
        cout<<"Case "<<++t<<": "<<ic<<endl;
    }
}
