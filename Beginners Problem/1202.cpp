#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,m,r1,c2,c1,r2;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>r1>>c1>>r2>>c2;
        if(abs(r1-r2)==abs(c1-c2))cout<<"Case "<<t+1<<": 1\n";
        else if((r1-r2+c1-c2)%2)cout<<"Case "<<t+1<<": impossible\n";
        else cout<<"Case "<<t+1<<": 2\n";
    }
}
/*
3

1 1 10 10

1 1 10 11

1 1 5 3


Case 1: 1

Case 2: impossible

Case 3: 2

 */

