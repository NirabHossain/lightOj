#include<bits/stdc++.h>
#define f for(i=0;i<n;i++)
using namespace std;
int main()
{
    int T,t,m,n,i,temp,a[1001],u,v;
    char c;
    cin>>T;
    for(t=0;t<T;t++){
       cin>>n>>m;
       f cin>>a[i];
       cout<<"Case "<<t+1<<":\n";
       for(int j=0;j<m;j++){
            cin>>c;
            if(c=='S'){
                cin>>temp;
                f a[i]+=temp;
            }
            else if(c=='M'){
                cin>>temp;
                f a[i]*=temp;
            }
            else if(c=='D'){
                cin>>temp;
                f a[i]/=temp;
            }
            else if(c=='R'){
                for(i=0;i<n/2;i++){
                    temp=a[i];a[i]=a[n-i-1];a[n-i-1]=temp;
                }
            }
            else if(c=='P'){
                cin>>u>>v;
                temp=a[u];a[u]=a[v];a[v]=temp;
            }
       }
       for(i=0;i<n-1;i++) cout<<a[i]<<" ";
       cout<<a[n-1]<<endl;
    }
}
/*
2 5 3 1 2 3 4 5 P 0 1 S 1 R 4 2 2 7 8 1 M 10 D 5
*/
