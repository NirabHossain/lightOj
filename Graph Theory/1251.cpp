#include<bits/stdc++.h>
#define f for(int t=1;t<=T;t++)
#define fin for(int i=0;i<n;i++)
#define Pr cout<<"Case "<<t<<": "<<
using namespace std;
int main()
{
    int i,t,T,j,m,n,p,k=2,a[32],t1,t2;
    vector<int>v[32];
    cin>>T;
    f{
        memset(a,0,sizeof a);
        cin>>n>>m;
        for(i=1;i<=n;i++){
            v[i].push_back(0);
            for(j=1;j<=k;j++){
                cin>>m;
                v[i].push_back(m);
                if(m>0)a[m]++;
                if(m<0)a[-m]--;
            }
        }


        for(i=1,t1=t2=0;i<=n;i++){
            for(j=1,t1=0;j<=k;j++){
                if(v[i][j]>0 && a[v[i][j]]>0)t1=1,cout<<v[i][j]<<" ";
                if(v[i][j]<0 && a[-v[i][j]]<0)t1=1,cout<<v[i][j]<<" ";
            }
            cout<<endl;
//            if(t1==0)t2=1;
        }
//        t2?Pr"No\n":Pr"Yes\n";
  //      for(i=1;i<=n;i++)v[i].clear();
    }
}
