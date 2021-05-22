#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,T;
    double r,s,pi=2*acos(0.0);
    cin>>T;
    for(i=0;i<T;i++){
        cin>>r;
        s=4*r*r-pi*r*r;
        printf("Case %d: %.2lf\n",i+1,s);
    }
}
