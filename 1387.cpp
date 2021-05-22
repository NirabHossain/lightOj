#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,n,t,s;
    string c;
    cin>>t;
    for(i=0;i<t;i++){
            cout<<"Case "<<i+1<<":\n";
        cin>>n;
        s=0;
        for(j=0;j<n;j++){
            cin>>c;
            if(c=="donate"){
                cin>>k;
                s+=k;
            }
            if(c=="report")cout<<s<<endl;
        }
    }
}
