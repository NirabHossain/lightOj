#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,k,a,c,j;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        for(j=0,k=2,c=0;j<n;j++){
            cin>>a;
            if(k<a)c+=ceil((a-k)/5.0);
            k=a;
        }
        cout<<"Case "<<i+1<<": "<<c<<endl;
    }
}
//2 5 2 3 3 3 4 4 2 3 4 5
