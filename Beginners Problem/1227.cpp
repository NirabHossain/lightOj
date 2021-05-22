#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,m,n,i,temp,k,p,q,w;
    string a;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>n>>p>>q;
        for(i=0,k=0,m=0;i<n;i++){
            cin>>w;
            if(k+w<=q){k+=w;m++;}
        }
        cout<<"Case "<<t+1<<": "<<min(m,p)<<endl;
    }
}

//2 3 2 10 1 2 3 4 5 5 4 4 5 5
