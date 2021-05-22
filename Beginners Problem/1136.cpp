#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,m,n,i,temp;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>m>>n;
        n%3==2?n=(n/3)*2+1:n=(n/3)*2;
        (m-1)%3==2?m=((m-1)/3)*2+1:m=((m-1)/3)*2;
        cout<<"Case "<<t+1<<": "<<n-m<<endl;
    }
}
/*

2 3 5 10 110


Case 1: 2

Case 2: 67

 */
