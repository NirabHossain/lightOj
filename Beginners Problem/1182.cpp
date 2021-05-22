#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,t,m,n,i,temp;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>n;m=0;
        while(n){
            m=m+n%2;
            n/=2;
        }
        m%2?cout<<"Case "<<t+1<<": odd\n":cout<<"Case "<<t+1<<": even\n";
    }
}


