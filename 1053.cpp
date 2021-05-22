#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int d,i,t,a,b,c;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b>>c;
        d=max(max(a,b),max(b,c));
        2*d*d==a*a+b*b+c*c?printf("Case %d: yes\n",i+1):printf("Case %d: no\n",i+1);
    }
}
