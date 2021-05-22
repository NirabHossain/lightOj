#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,m1,m2,m3,n,i,t1,t2,k,j;
    string a,c1,c2;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>n;
        for(j=0,t1=0,t2=INT_MAX;j<n;j++){
            cin>>a>>m1>>m2>>m3;
            if(t1<m1*m2*m3){t1=m1*m2*m3;c1=a;}
            if(t2>m1*m2*m3){t2=m1*m2*m3;c2=a;}
        }
        if(t1==t2)printf("Case %d: no thief\n",t+1);
        else cout<<"Case "<<t+1<<": "<<c1<<" took chocolate from "<<c2<<endl;
    }
}

