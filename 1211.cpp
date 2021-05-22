#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,j,v,x1,y1,x2,z1,z2,y2,x,y,z,x3,y3,z3,n;
    cin>>t;
    for(i=0;i<t;i++){
        x=y=z=0;x3=y3=z3=1002;
        cin>>n;
        for(j=0;j<n;j++){
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            x=max(x1,x);x3=min(x3,x2);
            y=max(y1,y);y3=min(y3,y2);
            z=max(z1,z);z3=min(z3,z2);
            v=(x3-x)*(y3-y)*(z3-z);
            if(v<0)v=0;
        }
        cout<<"Case "<<i+1<<": "<<v<<endl;
    }
}
