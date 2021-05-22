#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int j1,i,t,n,j,m,k,s;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>m>>n;
        k=0;
        for(j=m;j<=n;j++){
            j1=j*(j+1)/2;
            s=0;
            while(j1){
                s+=j1%10;
                j1/=10;
            }
            if(s%3==0)k++;
        }
        cout<<"Case "<<i+1<<": "<<k<<endl;
    }
}
