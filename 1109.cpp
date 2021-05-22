#include<bits/stdc++.h>
#include<iterator>
using namespace std;
int main()
{
    int i,t,temp,a[1002],n,j,p[1002],N=1000,b=0;
    memset(a,0,sizeof a);
    memset(p,0,sizeof p);
    for(n=1;n<=N;n++) for(i=1;i<=n;i++) if(n%i==0){
        a[n]++;
        if(b<a[i])b=a[i];
    }
    j=1000;
    while(b){
        for(i=1;i<=N;i++){
            if(b==a[i]){
                p[j]=i;
                j--;
            }
        }
        b--;
    }
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        cout<<"Case "<<i+1<<": "<<p[n]<<endl;
    }
}
//5 1 2 3 4 1000

