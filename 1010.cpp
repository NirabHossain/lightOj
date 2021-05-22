#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned i,T;
    int m,n,s;
    cin>>T;
    for(i=0;i<T;i++){
        cin>>m>>n;
        if(m==1||n==1){s=m+n-1;}
        else if(min(m,n)==2 && max(m,n)<=3){s=4;}
        else if(min(m,n)==2){s=(m*n/8)*4+min((m*n)%8,4);}
        else s=ceil(m*n/2.0);
        cout<<"Case "<<i+1<<": "<<s<<endl;

    }
}
