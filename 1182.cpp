#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,t,n;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        j=0;
        while(n){
            j+=n%2;
            n/=2;
        }
        j%2?cout<<"Case "<<i+1<<": odd\n":cout<<"Case "<<i+1<<": even\n";
    }
}
