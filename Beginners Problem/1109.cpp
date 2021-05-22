#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,m,n,i,j,temp[1001],c[1001],k,temp1;
    memset(temp,0,sizeof temp);
    for(i=1,m=0;i<=1000;i++){
        for(n=1;n<=i;n++)if(i%n==0){
            temp[i]++;
        }
        if(m<temp[i])m=temp[i];
    }
    i=1;k=1;
    while(i<=m){
        for(j=1000;j>=1;j--){
            if(temp[j]==i){
                c[k++]=j;
            }
        }
        i++;
    }
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>n;
        cout<<"Case "<<t<<": "<<c[n]<<endl;
    }
}

