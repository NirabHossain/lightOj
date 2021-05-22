#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,m,n,i,p,temp;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>m>>n;
        p=19+(abs(m-n)+m)*4;
        printf("Case %d: %d\n",t+1,p);
    }
}

