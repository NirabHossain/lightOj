#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t=1,n,T,m,k,p,c1,c2;
    bool L[101],R[101];
    for(cin>>T;T--;){
            memset(L,0,sizeof L);memset(R,0,sizeof R);
            c1=c2=0;
            for(cin>>k;k--;){
                cin>>m>>n>>p;
                if(!L[m] && !R[n]){
                    c1+=p;
                    L[m]=R[n]=true;
                }
                else {c2+=p;L[n]=R[m]=true;}
            }
            cout<<"Case "<<t++<<": "<<min(c1,c2)<<endl;
    }
}
//4 3 1 3 1 1 2 1 3 2 1
