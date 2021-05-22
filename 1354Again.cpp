#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k,n,a[5],m,ic;
    cin>>t;
    string s;
    for(i=0;i<t;i++){
        cin>>a[1];
        for(j=2;j<=4;j++){
            scanf(".");
            cin>>a[j];
        }
        cin>>s;
        for(j=1,m=0,ic=0;j<=4;j++){
            for(k=7,n=0;k>=0;k--){
                n+=pow(2,k)*(s[m]-48);
                m++;
                if(s[m]=='.'){
                    m++;
                    break;
                }
            }
            if(a[j]!=n)ic=1;
        }
        ic?cout<<"Case "<<i+1<<": No\n":cout<<"Case "<<i+1<<": Yes\n";
    }
}
///2 192.168.0.100 11000000.10101000.00000000.11001000 65.254.63.122 01000001.11111110.00111111.01111010
