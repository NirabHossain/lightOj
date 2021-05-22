#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,p,q,s,q1,d[35],k,j;
    cin>>t;
    for(i=0;i<t;i++){
        memset(d,0,sizeof d);
        cin>>n>>p>>q;
        for(j=1;j<=n;j++){
            cin>>d[j];
        }
        for(j=1,s=0,k=0;j<=min(n,p);j++){
            s+=d[j];
            if(s>q)break;
            k++;
        }
        cout<<"Case "<<i+1<<": "<<k<<endl;
    }
}
//2 3 2 10 1 2 3 4 5 5 4 4 5 5
