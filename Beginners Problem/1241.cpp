#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,d,m,n,i,temp,k;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>n;
        for(i=0,d=0,k=2;i<n;i++){
            cin>>m;
            if(k<m)d+=ceil((m-k)/5.0);
            k=m;
        }
        cout<<"Case "<<t+1<<": "<<d<<endl;
    }
}

//2 5 2 3 3 3 4 4 2 3 4 5
