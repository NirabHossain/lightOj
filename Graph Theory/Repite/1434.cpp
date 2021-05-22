#include<bits/stdc++.h>
using namespace std;

bool yes[30],flag,br;
int dx[]={0,0,0,1,1,1,-1,-1,-1},dy[]={-1,0,1,-1,0,1,-1,0,1},r,c,len;
string grid[30],inp,dirC[9]={"L","*","R","DL","D","DR","UL","U","UR"};
vector<string>res;

bool dfs(int ic,int x,int y)
{
    if(ic==len)return true;
    for(int i=0;i<9;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(nx>=0&&nx<r&&ny>=0&&ny<c&&grid[nx][ny]==inp[ic]&&dfs(ic+1,nx,ny)){
            res.push_back(dirC[i]);
            return true;
        }
    }
    return false;
}

int main()
{
    int t,T=1,sz,i,j,k,m,x,y;
    for(cin>>t;t--;){
        memset(yes,0,sizeof yes);
        for(i=0,cin>>r>>c;i<r;i++){
            cin>>grid[i];
            for(j=0;j<c;j++)yes[grid[i][j]-'A']=1;
        }
        cout<<"Case "<<T++<<":\n";
        for(k=0,cin>>m;k<m;k++){
            flag=false;
            cin>>inp;
            len=inp.size();
            for(i=0;i<len;i++)if(!yes[inp[i]-'A']){flag=true;break;}
            if(flag){cout<<inp<<" not found\n";continue;}

            for(i=0,br=false;i<r&&!br;i++)for(j=0;j<c;j++)if(grid[i][j]==inp[0]){
                res.clear();
                if(dfs(1,i,j)){
                    flag=true;br=true;
                    x=i+1,y=j+1;
                    break;
                }
            }
            if(flag){
                cout<<inp<<" found: ("<<x<<","<<y<<")";
                for(i=res.size()-1;i>=0;i--)cout<<", "<<res[i];
                cout<<endl;
            }
            else cout<<inp<<" not found\n";
        }
    }
}
