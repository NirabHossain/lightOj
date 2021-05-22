#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,t,T,k;
    string s[150],c;
    cin>>T;
    for(t=0;t<T;t++){
        cout<<"Case "<<t+1<<":\n";
        i=k=0;s[i]="http://www.lightoj.com/";
        while(cin>>c){
            if(c=="QUIT")break;
            else if(c=="VISIT"){cin>>s[++i];cout<<s[i]<<endl;k=i;}
            else if(c=="BACK" && i>0)cout<<s[--i]<<endl;
            else if(c=="FORWARD" && i<k)cout<<s[++i]<<endl;
            else cout<<"Ignored\n";
        }
    }
}
