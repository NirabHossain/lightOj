#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,w,m,t;
    double s;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>w;
        m=1;
        if(w%2!=0)cout<<"Case "<<i+1<<": Impossible\n";
        else{
            while(w%2==0){
                w/=2;m*=2;
            }
            cout<<"Case "<<i+1<<": "<<w<<" "<<m<<endl;
        }
    }
}
