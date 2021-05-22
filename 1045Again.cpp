#include<bits/stdc++.h>
using namespace std;
double d[1000002];//Eitake global banaile kaj hoy, local rakhle kn kaj kore na?
int main()
{
    long long int i,b,n,t;
    cin>>t;
    d[0]=0;
    for(i=1;i<=1000000;i++){
        d[i]=d[i-1]+log(i);
    }
    for(i=1;i<=t;i++){
        cin>>n>>b;
        cout<<"Case "<<i<<": "<<(long long)(d[n]/log(b)+1)<<endl;
    }
}
//5 5 10 8 10 22 3 1000000 2 0 100
