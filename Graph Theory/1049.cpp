#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t=1,n,T,m,k,p,c[101][101];
    for(cin>>T;T--;){
            memset(c,0,sizeof c);
            for(cin>>k;k--;){
                cin>>m>>n;
                cin>>c[m][n];
            }
            for(i=1;i<n;i++){
                cout<<i<<" "<<i+1<<" "<<c[i][i+1]<<"\n";
                cout<<n+1-i<<" "<<n-i<<" "<<c[i][i+1]<<"\n";
            }
    }
}
//4 3 1 3 1 1 2 1 3 2 1
