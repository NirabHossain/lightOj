#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,m1,m2,n,i,temp,k,c1,c2,a1,a2,b1,b2;
    double q,a,b,c;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>c1>>c2>>a1>>a2>>b1>>b2;
        a=b=sqrt((c1-a1)*(c1-a1)+(c2-a2)*(c2-a2));
        c=sqrt((b1-a1)*(b1-a1)+(b2-a2)*(b2-a2));
        q=acos((b*b+a*a-c*c)/(2*a*b));
        printf("Case %d: %lf\n",t+1,q*a);
    }
}

//5 5711 3044 477 2186 3257 7746 3233 31 3336 1489 1775 134 453 4480 1137 6678 2395 5716 8757 2995 4807 8660 2294 5429 4439 4272 1366 8741 6820 9145
