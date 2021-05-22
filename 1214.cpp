#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,n,i,t;
    string c;
    cin>>t;
    for(int j=0;j<t;j++){
        cin>>c>>a;
        n=c.length();
        for(i=0,b=0;i<n;i++){
            if(c[i]=='-')continue;
            b+=(c[i]-48);
            b%=a;
            b*=10;
        }
        b==0?cout<<"Case "<<j+1<<": divisible\n":cout<<"Case "<<j+1<<": not divisible\n";
    }
}
