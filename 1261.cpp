#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,j1,j2,i1,m,n,t,k,num,p;
    cin>>t;
    for(i1=0;i1<t;i1++){
        k=35;
        int pos[k][k]={0},neg[k][k]={0},take[k]={0},happy[k]={0},flag=0;
        cin>>n>>m>>k;
        for(i=1;i<=n;i++)for(j=1;j<=k;j++){
            cin>>num;
            num>0? pos[i][num]=1:neg[i][-1*num]=1;
        }
        cin>>p;
        for(i=1;i<=p;i++){
            cin>>num;
            take[num]=1;
        }///Input

        for(i=1;i<=m;i++)for(j=1;j<=n;j++){///ALGORITHM
            if(take[i]==0){
                if(neg[j][i]==1)happy[j]=1;
            }
            else{
                if(pos[j][i]==1)happy[j]=1;
            }
        }

        ///Output
        for(i=1;i<=n;i++)if(happy[i]==false)flag=1;
        cout<<"Case "<<i1+1<<": ";
        flag?cout<<"No\n":cout<<"Yes\n";
    }
}
///2 3 4 2 +1 -2 +3 +4 -3 -1 1 4 1 5 3 +1 -2 +4 2 2 5
