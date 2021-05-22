#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1,T,i,k,j,a,b,c,n,L[101],R[101],m;
    for(cin>>T;T--;){
        memset(L,0,sizeof L);memset(R,0,sizeof R);
        for(cin>>n,k=m=0;n--;){
            cin>>a>>b>>c;
            if(!L[a] && !R[b])L[a]=R[b]=1,k+=c;
            else R[a]=L[b]=1,m+=c;
        }
        printf("Case %d: %d\n",t++,min(k,m));
    }
}
