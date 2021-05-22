#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4,A,i,t;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        x4=x1+x3-x2;y4=y1+y3-y2;
        A=abs(x1*y2+x2*y3+x3*y1-y1*x2-y2*x3-y3*x1);
        cout<<"Case "<<i+1<<": "<<x4<<" "<<y4<<" "<<A<<endl;
    }
}

//3 0 0 10 0 10 10 0 0 10 0 10 -20 -12 -10 21 21 1 40
