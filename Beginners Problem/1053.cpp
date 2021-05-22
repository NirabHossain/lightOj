#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,t,a,b,c,i,temp;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>a>>b>>c;
        if(c*c==a*a+b*b||c*c+a*a==b*b||c*c+b*b==a*a)
            printf("Case %d: yes\n",t+1);
            else
                printf("Case %d: no\n",t+1);
    }
}
