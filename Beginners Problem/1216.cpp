#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,m,n,i,temp;
    double p,pi=2*acos(0),k,r1,r2,h,r,A;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>r1>>r2>>h>>p;
        k=h*r2/(r1-r2);
        r=(p+k)*r2/k;
        A=pi*(r*r*(p+k)-r2*r2*k)/3.0;
        printf("Case %d: %lf\n",t+1,A);
    }
}

/*
2 5 2 3 2 5 2 3 3


Case 1: 58.643062867

Case 2: 122.52211349

*/
