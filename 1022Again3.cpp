#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,T;
    double r;
    cin>>T;
    for(i=0;i<T;i++){
        cin>>r;
        printf("Case %d: %.2f\n",i+1,4*r*r-2*acos(0.0)*r*r);
    }
}
