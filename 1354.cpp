#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,j,n,k,a[10],p,x;
    string s1,s2;
    char c;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>s1>>s2;
        k=s1.length();
        cout<<s1[k+1]<<endl;
        for(j=0;j<k;j++){
            cout<<s1[k]-48;
            p=1;x=1;
            while(c!='.'||c!='\n'){
                a[p]=(s1[j]-48);
                cout<<a[p]<<" ";
            }
        }
        cout<<endl;
    }
}
//2 192.168.0.100 11000000.10101000.00000000.11001000 65.254.63.122 01000001.11111110.00111111.01111010
