#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,a1,a2,b1,b2,c1,c2,k,d1,d2;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        cout<<"Case "<<t+1<<": "<<a1+c1-b1<<" "<<a2+c2-b2<<" "<<abs(a1*b2-a2*b1+b1*c2-b2*c1+c1*a2-c2*a1)<<endl;
    }
}

//3 0 0 10 0 10 10 0 0 10 0 10 -20 -12 -10 21 21 1 40
