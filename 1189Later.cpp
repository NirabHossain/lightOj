#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,j,i,t,n,a[22],k,f[22],x;
    f[0]=1;
    for(i=1;i<=20;i++)f[i]=f[i-1]*i;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        j=0;
        for(k=20;k>=0&&n>0;k--){
            if(f[k]<=n){
                n-=f[k];
                j++;
                a[j]=k;
            }
        }
        cout<<"Case "<<i+1<<": ";
        if(n!=0)cout<<"impossible\n";
        else{
            cout<<a[j]<<"!";
            for(m=j-1;m>=1;m--){
                cout<<"+"<<a[m]<<"!";
            }
        }
        cout<<endl;
    }
}
//4 7 7 9 11
