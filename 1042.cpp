#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i1,a[100],i,s,T,N,j,k,n;
    cin>>T;
    for(i1=0;i1<T;i1++){
        memset(a,0,sizeof a);
        cin>>N;
        n=N;i=0;s=0;
        do{
            i++;
            a[i]=n%2;
            s+=a[i];
            n/=2;
        }while(n>0);
        j=i;
        for(k=i;k>0;k--)cout<<a[k];
        cout<<endl;
        do{
            j--;
            if(a[j]==1){
                if(N==pow(2,s)-1){a[i]=0;a[i+1]=1;}
                else{
                    for(k=j-1;k>0;k--){
                        if(a[k]==0){
                            a[k]=1;a[j]=0;
                        }
                    }
                }
            }
        }while(a[j]!=1);
        cout<<endl;
        for(k=i;k>0;k--)cout<<a[k];
        for(j=i+1,s=0,k=1;j>0;j--){
            s=s+k*a[j];
            k=2*k;
        }
        cout<<endl<<"Case "<<i1+1<<": "<<s<<endl;

    }
}
