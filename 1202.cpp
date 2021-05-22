#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,x,y,z,w;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x>>y>>z>>w;
        x=abs(x-z),y=abs(y-w);
        if(x==y)cout<<"Case "<<i+1<<": 1\n";
        else if(x%2==y%2)cout<<"Case "<<i+1<<": 2\n";
        else cout<<"Case "<<i+1<<": impossible\n";
    }
}
