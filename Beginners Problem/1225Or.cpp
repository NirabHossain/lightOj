#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,m1,m2,n,i,temp,k;
    string a;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>a;k=a.size();
        m1=m2=0;y
        for(i=0;i<k/2;i++){
            m1+=a[i];
            m2+=a[k-1-i];
        }
        m1==m2?cout<<"Case "<<t+1<<": Yes\n":cout<<"Case "<<t+1<<": No\n";
    }
}

//5 1 21 16161 523125 0

