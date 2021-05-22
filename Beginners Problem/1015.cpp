#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,m,n,i,k,p;
    cin>>T;
    for(i=0;i<T;i++){
        m=0;
        cin>>n;
        for(k=0;k<n;k++){
            cin>>p;
            if(p>0)m+=p;
        }
        cout<<"Case "<<i+1<<": "<<m<<endl;
    }
}
/*

2
3
1 5 10
2
1 99

Case 1: 16
Case 2: 100

*/
