#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,m,n,i,p,x1,x2,x3,x4,y2,y1,y3,y4,z1,z2,z3,z4;
    cin>>T;
    for(t=0;t<T;t++){
        x3=y3=z3=0;x4=y4=z4=1002;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            x3=max(x3,x1); x4=min(x4,x2);
            y3=max(y3,y1); y4=min(y4,y2);
            z3=max(z3,z1); z4=min(z4,z2);
        }
        p=(z4-z3)*(y4-y3)*(x4-x3);
        if(p<0)p=0;
        printf("Case %d: %d\n",t+1,p);
    }
}


