#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int temp,T,s,i,j,n;
    cin>>T;
    for(int i1=0;i1<T;i1++){
        cin>>s;
        n=ceil(sqrt(s));//cout<<"n="<<n;
        temp=(n*n+1-n-s)*pow(-1,n);//cout<<"\t"<<"temp="<<temp<<endl;
        if(temp>0){i=n-temp;j=n;}
        else{i=n; j=n+temp;}
        cout<<"Case "<<i1+1<<": "<<i<<" "<<j<<endl;
    }
}
/*
3

8

20

25


Case 1: 2 3

Case 2: 5 4

Case 3: 1 5
*/
