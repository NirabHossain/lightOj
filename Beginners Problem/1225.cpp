#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,n,i,k;
    string a;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>a;k=a.size();
        for(i=0;i<k/2;i++)if(a[i]!=a[k-1-i]){
            cout<<"Case "<<t+1<<": No\n";break;
        }
        if(i==k/2)cout<<"Case "<<t+1<<": Yes\n";
    }
}

//5 1 21 16161 523125 0

