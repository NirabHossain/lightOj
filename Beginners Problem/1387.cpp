#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,m,n,i,temp,k;
    string a;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>n;
        cout<<"Case "<<t+1<<":\n";
        for(i=0,m=0;i<n;i++){
            cin>>a;
            if(a=="donate"){cin>>k;m+=k;}
            else if(a=="report")cout<<m<<endl;
        }
    }
}
