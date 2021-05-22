#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int T,t,n,i;
    double r,p;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>r>>n;
        p=sin(2*acos(0)/n);
        printf("Case %d: %lf\n",t+1,p/(p+1)*r);
    }
}


