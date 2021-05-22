#include<bits/stdc++.h>
using namespace std;
double s[1000003];
int main()
{
    long long int T,t,m,n,i,temp;
    s[0]=0;
    for(i=1;i<=1000000;i++)s[i]=s[i-1]+log(i);
    cin>>T;
    for(t=0;t<T;t++){
        scanf("%lld %lld",&n,&m);
        long long p=s[n]/log(m);
        printf("Case %lld: %lld\n",t+1,p+1);
    }
}
