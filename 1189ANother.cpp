#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int j,i,t,m,a[22],k,f[22],x,ic;
    f[0]=1;
    for(i=1;i<=20;i++)f[i]=f[i-1]*i;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>m;
        ic=0;
        for(j=19;j>=0&&m>0;j--){
            if(f[j]<=m){
                m-=f[j];
                a[ic]=j;
                ic++;

            }
        }
        cout<<"Case "<<i+1<<": ";
        if(m!=0)
            cout<<"impossible"<<endl;
        else
        {
            cout<<a[ic-1];
            for(k=ic-2; k>=0; k--)
                cout<<"!+"<<a[k];
            cout<<"!"<<endl;


        }
     }
}
//4 7 7 9 11

