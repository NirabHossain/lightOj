#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,n,i;
    double m1,m2,m3,r1,r2,r3,r12,r13,r23,t12,t13,t23,A;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>r1>>r2>>r3;
        r12=r1+r2;r13=r1+r3;r23=r2+r3;
        t12=acos((r13*r13+r23*r23-r12*r12)/(2*r13*r23));
        t13=acos((-r13*r13+r23*r23+r12*r12)/(2*r12*r23));
        t23=acos((r13*r13-r23*r23+r12*r12)/(2*r13*r12));
        A=.5*(r12*r23*sin(t13)-(r2*r2*t13+r1*r1*t23+r3*r3*t12));
        printf("Case %d: %lf\n",t+1,A);
    }
}

//3 1.0 1.0 1.0 2 2 2 3 3 3
