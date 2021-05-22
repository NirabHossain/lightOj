#include<bits/stdc++.h>
using namespace std;

int ic,r,c,nm,flag,vis2[31][31],n,dx[]={0,1,-1,0,0,1,-1,-1,1},
                                  dy[]={0,0,-1,1,-1,1,0,1,-1};
bool vis[31][31],bt;
char ch[31][31],name[21][16],dc[]={'*','P','Q','D','U','R','L','S','T'};
vector<pair<int,int> >vec;

int dfs(int u,int v,int ic)
{
    for(int i=0;i<9;i++){
        int x=u+dx[i],y=v+dy[i];
        if(ch[x][y]==name[nm][ic+1]){
            dfs(x,y,ic+1);
            vis2[x][y]+=1;
    if(ic+2==strlen(name[nm])&&ch[x][y]==name[nm][strlen(name[nm])-1])
        {cout<<name[nm]<<" found\n";bt=1;vec.push_back(make_pair(-3,-3));}
            vec.push_back(make_pair(x,y));

for(int i1=0;i1<r;i1++){for(int j=0;j<c;j++)cout<<vis2[i1][j]<<" ";cout<<'\n';}cout<<endl;
        }
    }
    if(bt==0)memset(vis,0,sizeof vis);

/*
1
4 5
KHMMT
FNEMA
RAESJ
YRTES
1
JAMES


-2 -2
3 4 S
2 3 E
1 4 M
-2 -2
3 4 S
2 3 E
-2 -2
3 4 S
3 3 E
2 4 M
2 5 A
3 5 J

*/



}

int main()
{
    int i,T=1,t,j;
    for(cin>>t;t--;){
        for(i=0,nm=0,ic=0,cin>>r>>c;i<r;i++)cin>>ch[i];
        for(i=0,bt=0,cin>>n;i<n;i++)cin>>name[i];
        for(i=0;i<r;i++)for(j=0;j<c;j++)
            if(ch[i][j]==name[nm][ic]&&!bt&&nm<n){
                vec.clear();
                memset(vis,0,sizeof vis);
                memset(vis2,0,sizeof vis);
                dfs(i,j,ic);
                vis2[i][j]+=1;
                if(bt)vec.push_back(make_pair(i,j));
            }
    }
    cout<<"\n\n\n\n";
    for(i=0;i<vec.size();i++)cout<<vec[i].first+1<<" "<<vec[i].second+1<<" "<<ch[vec[i].first][vec[i].second]<<endl;
    cout<<"\n\n\n\n";


            for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)cout<<vis2[i][j]<<" ";cout<<'\n';}
        cout<<ic<<endl;

}





/*
1
4 5
KHPMA
FNEOA
RAHSJ
YRTES
1
JAMES




4
JAMES
JOHN
HANNAH
MARIE
*/
