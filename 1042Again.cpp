#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,i1,j,t,n,N,s,k,s1;
    bool a[40],b[40];
    cin>>t;
    for(i1=0;i1<t;i1++){
        memset(a,0,sizeof a);
        cin>>N;
        n=N;j=0;
        while(n){j++;a[j]=n%2;n/=2;}
        for(i=1;i<=j;i++){
            if(a[i]==1&&a[i+1]==0){
                k=i;a[i]=0;a[i+1]=1;
                break;
            }
        }
        for(i=1,s1=0;i<k;i++){
            s1+=a[i];
            a[i]=0;
        }
        for(i=1;i<=s1;i++)a[i]=1;

        for(i=1,s=0;i<=j+1;i++){
            s+=a[i]*pow(2,i-1);
        }
        cout<<"Case "<<i1+1<<": "<<s<<endl;
    }
}
