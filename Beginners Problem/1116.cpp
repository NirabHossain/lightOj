#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,t,m,n,i,temp;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>n;
        if(n%2!=0)cout<<"Case "<<t+1<<": Impossible\n";
        else{
            m=1;
            while(n%2==0){
                m*=2;
                n/=2;
            }
            printf("Case %lld: %lld %lld\n",t+1,n,m);
        }

    }
}

