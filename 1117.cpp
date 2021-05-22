#include<bits/stdc++.h>
using namespace std;

long long int res,a[16],m;
void cocount(long long int n){
    for(long long int i=0;i<m;i++)if(n%a[i]==0)return;
    res++;
}

int main()
{
    long long int i,j,t,T=1,n;
    for(cin>>t;t--;){
        memset(a,0,sizeof a);
        for(cin>>n>>m,i=0;i<m;i++)cin>>a[i];
        for(j=1,res=0;j<=n;j++){
            cocount(j);
        }
        cout<<"Case "<<T++<<": "<<res<<endl;
    }
}
