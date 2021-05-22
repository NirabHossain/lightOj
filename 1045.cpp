#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,t,n,j,b;
    double s;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>b;
        s=0;
        if(n==0||n==1)s=1;
        else if(n==2){
            n=4;s=0;
            while(n){
                n/=b;
                s++;
            }
        }
        else{
            for(j=1;j<=n;j++){
                s+=log(j);
            }
            s=s/log(b);
        }
        n=ceil(s);
//        cout<<"Case "<<i+1<<": "<<n<<endl;
        printf("Case %lld: %lld\n",i+1,n);
    }
}
//5 5 10 8 10 22 3 1000000 2 0 100
