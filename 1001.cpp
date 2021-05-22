#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,T,s,i;
    cin>>T;
    for(i=0;i<T;i++){
        cin>>s;
        s%2==0?a=s/2:a=(s+1)/2;
        b=s/2;
        cout<<a<<" "<<b<<endl;
    }
}
