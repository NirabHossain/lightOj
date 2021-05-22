#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,y,L;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>y>>L;
        cout<<"Case "<<i+1<<": "<<y*4+19+abs(y-L)*4<<endl;
    }
}
