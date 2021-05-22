#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,r2,h,p,t,i;
    double v,x,r3;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>r1>>r2>>h>>p;
        x=r2*h/(double)(r1-r2);
        r3=r2*(p+x)/x;
        v=(2*(acos(0.0))/3.0)*(r3*r3*(p+x)-r2*r2*x);
        printf("Case %d: %.9lf\n",i+1,v);
    }
}
//2 5 2 3 2 5 2 3 3
