
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n,m,k,x1,x2,y1,y2,z1,z2;
    double x,y,z,p;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>z1>>z2>>x1>>x2>>y1>>y2;
        z=sqrt((x1-y1)*(x1-y1)+(x2-y2)*(x2-y2));
        x=sqrt((z1-y1)*(z1-y1)+(z2-y2)*(z2-y2));
        y=sqrt((x1-z1)*(x1-z1)+(x2-z2)*(x2-z2));
        p=acos((x*x+y*y-z*z)/(2*x*y));
        printf("Case %d: %lf\n",i+1,x*p);
//        cout<<i+1<<": "<<x*p<<endl;
    }
}
//5 5711 3044 477 2186 3257 7746 3233 31 3336 1489 1775 134 453 4480 1137 6678 2395 5716 8757 2995 4807 8660 2294 5429 4439 4272 1366 8741 6820 9145
