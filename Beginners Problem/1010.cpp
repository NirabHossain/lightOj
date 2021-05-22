#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,m,n,i,p,temp;
    cin>>T;
    for(i=0;i<T;i++){
        cin>>m>>n;
        if(m==1||n==1) p=max(m,n);
        else if((m==2||n==2)&& (m*n)%8){
            p=(m*n)/8;
            if((m*n)%8==2)p=4*p+2;
            else p=4*p+4;
        }
        else p=ceil(m*n/2.0);
        cout<<"Case "<<i+1<<": "<<p<<endl;
    }
}
/*

3
8 8
3 7
4 10

Case 1: 32
Case 2: 11
Case 3: 20

*/
