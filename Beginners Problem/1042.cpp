#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    long long int T,m,n,j,i,i1,p,temp,l;
    bool a[50];
    cin>>T;
    for(i1=0;i1<T;i1++){
        memset(a,0,sizeof a);
        cin>>n;
        j=0;
        while(n){
            a[j]=n%2;
            n/=2;
            j++;
        }
        for(i=0;i<j+1;i++)if(a[i]==1&&a[i+1]==0){
            a[i]=0;a[i+1]=1;
            m=i;
            break;
        }
        temp=0;
        for(i=0;i<m;i++){
            temp=temp+a[i];
            a[i]=0;
        }
        for(i=0;i<temp;i++)a[i]=1;
        for(i=0,l=0;i<j+1;i++){
            l+=pow(2,i)*a[i];
        }
        cout<<"Case "<<i1+1<<": "<<l<<"\n";
    }
}
/*

5
23
14232
391
7
8


Case 1: 27
Case 2: 14241
Case 3: 395
Case 4: 11
Case 5: 16

*/
