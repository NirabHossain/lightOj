#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,t,n,j,m,k1,k2,k,s;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>m>>n;
        n%3==2?k1=(n/3)*2+1:k1=2*(n/3);
        m%3==2?k2=(m/3)*2+1:k2=2*(m/3);
        k=k1-k2;
        if(m%3!=1)k++;
        cout<<"Case "<<i+1<<": "<<k<<endl;

    }
}

