#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,ic;
    string s[102],c;
    cin>>t;
    for(i=1,n=0,ic=0;i<=t;i++){
        cout<<"Case "<<i<<":\n";
        s[n]="http://www.lightoj.com/";
        while(cin>>c){
            if(c=="QUIT")break;
            else if(c=="VISIT"){
                cin>>c;
                cout<<c<<endl;
                s[++ic]=c;
                n=ic;
            }
            else if(c=="FORWARD"){
                if(ic+1>n)puts("Ignored");
                else cout<<s[++ic]<<endl;
            }
            else if(c=="BACK"){
                if(ic-1<0)puts("Ignored");
                else cout<<s[--ic]<<endl;
            }
        }
    }
}

///1 VISIT http://uva.onlinejudge.org/ VISIT http://topcoder.com/ BACK BACK BACK FORWARD VISIT http://acm.sgu.ru/ BACK BACK FORWARD FORWARD FORWARD QUIT
