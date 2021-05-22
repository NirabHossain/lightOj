#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,T,S,t;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>S;
        k=ceil(sqrt(S));
        i=k;
        j=k-abs(k*k+1-k-S);
        if(k%2==0 && S<k*k+1-k||k%2!=0 && S>k*k+1-k){k=j;j=i;i=k;}
        cout<<"Case "<<t+1<<": "<<i<<" "<<j<<endl;
    }
}
