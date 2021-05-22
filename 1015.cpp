#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,T,j,k,p;
    unsigned long long int s;
    cin>>T;
    for(i=0;i<T;i++){
        cin>>k;
        s=0;
        for(j=0;j<k;j++){
            cin>>p;
            if(p>0)s+=p;
        }
        cout<<"Case "<<i+1<<": "<<s<<endl;
    }
}
