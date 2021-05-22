#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n,x,y,z,v[102],i1,i2,p1,p2;
    string s[102];
    cin>>t;
    for(i=0;i<t;i++){
        memset(v,0,sizeof v);
        i1=INT_MAX;i2=0;p1=p2=0;
        cin>>n;
        for(j=1;j<=n;j++){
            cin>>s[j]>>x>>y>>z;
            v[j]=x*y*z;
        }
        for(j=1;j<=n;j++){
            if(v[j]>i2)i2=v[j],p2=j;
            if(v[j]<i1)i1=v[j],p1=j;
        }
        if(p1==p2)cout<<"Case "<<i+1<<": no thief\n";
        else cout<<"Case "<<i+1<<": "<<s[p2]<<" took chocolate from "<<s[p1]<<endl;

    }
}
