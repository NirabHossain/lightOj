#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,x,y,a[102],i1,m,j;
    char k;
    cin>>t;
    for(i1=0;i1<t;i1++){
        memset(a,0,sizeof a);
        cin>>m>>n;
        for(j=0;j<m;j++){
            cin>>a[j];
        }
        for(i=0;i<n;i++){
            cin>>k;
            if(k=='S'){
                cin>>x;
                for(j=0;j<m;j++)a[j]+=x;
            }
            if(k=='M'){
                cin>>x;
                for(j=0;j<m;j++)a[j]*=x;
            }
            if(k=='D'){
                cin>>x;
                for(j=0;j<m;j++)a[j]/=x;
            }
            if(k=='P'){
                cin>>x>>y;
                swap(a[x],a[y]);
            }
            if(k=='R'){
                for(j=0;j<m/2;j++)swap(a[j],a[m-j-1]);
            }
        }
        cout<<"Case "<<i1+1<<":\n";
        for(j=0;j<m-1;j++){
            cout<<a[j]<<" ";
        }
        cout<<a[m-1]<<endl;
    }
}
