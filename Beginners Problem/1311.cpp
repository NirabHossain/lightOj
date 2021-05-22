#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,k;
    double a1,a2,v1,v2,v3,d,t1,t2,s;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>v1>>v2>>v3>>a1>>a2;
        t1=v1/a1;t2=v2/a2;
        s=.5*(v1*v1/a1+v2*v2/a2);
        d=v3*max(t1,t2);
        printf("Case %d: %lf %lf\n",t+1,s,d);
    }
}

//1 0.5 1.0 2 0.25 0.5
