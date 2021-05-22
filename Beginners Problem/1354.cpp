#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
    int T,t,m,n,i,temp,k,j;
    cin>>T;
    for(t=0;t<T;t++){
        string a,b,c[4],d,e,f;
        stringstream p[4];
        cin>>a>>b;
        for(j=0;j<4;j++){
            for(i=0+9*j,k=0;i<8+9*j;i++){
                k=k+(b[i]-48)*pow(2,9*j+7-i);
            }
            p[j]<<k;
            p[j]>>c[j];
        }
        d=c[0]+"."+c[1]+"."+c[2]+"."+c[3];
        for(i=0,temp=0;i<d.size();i++)if(a[i]!=d[i]){
            printf("Case %d: No\n",t+1);temp++;break;
        }
        if(temp==0)printf("Case %d: Yes\n",t+1);
    }
}
/*

2

192.168.0.100 11000000.10101000.00000000.11001000 65.254.63.122 01000001.11111110.00111111.01111010

*/
