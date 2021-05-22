#include<bits/stdc++.h>
using namespace std;
const int N=168;
int p[N],y,ic,d[N],cnt;
bool vis[N];

void dfs(int n,int i,int s)
{
    if(n>y)return;
    if(y==n){cout<<"Matched "<<s++<<endl;exit(0);}//<<cnt<<" "<<y<<" "<<n<<endl;return;}
else{    cout<<endl;
    for(int j=i;j<ic;j++){
        cout<<s<<" "<<n<<" "<<j<<" "<<d[j]<<" "<<n+d[j]<<endl;
        dfs(n+d[j],j,s+1);
    }
    cout<<endl<<endl;
}
}
int main()
{
    int i,T=1,t=0,n=1001,k,m,s;
    for(n=1000;n>1;n--){
        for(i=2;i<=(int)sqrt(n);i++)if(n%i==0)break;
        if(i==(int)sqrt(n)+1)p[t++]=n;
    }
    for(cin>>t;t--;){
        memset(d,0,sizeof d);
        cin>>k>>m;
        y=m-k;
        for(i=0,ic=0;i<N;i++)if(k%p[i]==0)d[ic++]=p[i];
        for(i=0,cnt=0;i<ic;i++){
            s=1;
            dfs(d[i],i,s);
            cout<<"\n\n\n\n\n\n\n\n";
        }
    }
}
