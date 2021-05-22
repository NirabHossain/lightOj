#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,T,t,j,m,n,k,p,q;
    bool a[32],t1,t2;
    vector<int>v[32];
    cin>>T;
    for(t=0;t<T;t++){
        cin>>n>>m>>k;
        memset(a,0, sizeof a);
        for(i=1;i<=n;i++){
            v[i].push_back(0);
            for(j=1;j<=k;j++){
                cin>>p;
                v[i].push_back(p);
            }
        }
        cin>>p;
        for(i=0;i<p;i++){
            cin>>q;
            a[q]=1;
        }

        t1=t2=0;
        for(i=1;i<=n;i++){
            for(j=1,t1=0;j<=k;j++){
                if(v[i][j]>0 && a[v[i][j]])t1=1;
                if(v[i][j]<0 && !a[-v[i][j]])t1=1;
            }
            if(t1==0)t2=1;
        }
        t2?printf("Case %d: No\n",t+1):printf("Case %d: Yes\n",t+1);
        for(i=1;i<=n;i++)v[i].clear();
    }
}
//2 3 4 2 +1 -2 +3 +4 -3 -1 1 4 1 5 3 +1 -2 +4 2 2 5
