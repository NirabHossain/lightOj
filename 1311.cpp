#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n;
    double v1,v2,v3,a1,a2,t1,t2;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>v1>>v2>>v3>>a1>>a2;
        t1=v1/a1;t2=v2/a2;
        printf("Case %d: %lf %lf\n",i+1,.5*(v1*v1/a1)+.5*(v2*v2/a2),max(t1,t2)*v3);
//        cout<<"Case "<<i+1<<": "<<.5*(v1*v1/a1+v2*v2/a2)<<" "<<max(t1,t2)*v3<<endl;
    }
}
//1 0.5 1.0 2 0.25 0.5
