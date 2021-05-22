#include<bits/stdc++.h>
using namespace std;
int ic,k1,k2,n,X[]={1,-1,0,0},Y[]={0,0,1,-1};
char c[12][12];
queue<pair<int,int> >q;

void bfs(int r1, int r2){
    q.push(make_pair(r1,r2));
    while(!q.empty()){
        int x1=q.front().first, y1=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int x=x1+X[i],y=y1+Y[i];
            if(x<0||x>=n||y<0||y>=n)continue;
            if(c[x][y]=='A'+ic)ic++,k2=k1;
            c[x][y]='.';k1++;
            q.push(make_pair(x,y));
        }


        cout<<endl<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;c
        }
    }
    cout<<endl<<ic<<" "<<k1<<" "<<k2;


}

int main()
{
    int i,j,t=1,T,m,k;
    for(cin>>T;T--;){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>c[i];
            for(int j=0;j<n;j++)if(c[i][j]=='A'){
                m=i,k=j,c[i][j]='.';
                break;
            }
        }
        bfs(m,k);
        for(int i=0;i<n;i++)for(j=0;j<n;j++)if(c[i][j]!='#'){
            k2=0;
            break;
        }
        cout<<"Case "<<t++<<": "<<k2<<endl;//:cout<<"Case "<<t++<<": Impossible\n";
    }
}
