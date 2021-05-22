#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,j,n;
    string s;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>s;
        n=s.length();
        for(j=0;j<n/2;j++)if(s[j]!=s[n-1-j]){
            cout<<"Case "<<i+1<<": No\n";break;
        }
        if(j==n/2)cout<<"Case "<<i+1<<": Yes\n";
    }
}
//5 1 21 16161 523125 0
