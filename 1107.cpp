#include<bits/stdc++.h>
#define g(i,t) for(i=0;i<t;i++){
using namespace std;
int main()
{
    int x1,x2,y1,y2,x,y,i,t,m,j;
    cin>>t;
    g(i,t)
        cin>>x1>>y1>>x2>>y2>>m;
        cout<<"Case "<<i+1<<":\n";
        g(j,m)
            cin>>x>>y;
            if(x1<x && x<x2 && y1<y && y<y2)cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
}
