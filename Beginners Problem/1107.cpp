#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,m,n,i,x1,y1,x2,y2,x,y;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>x1>>y1>>x2>>y2>>m;
        cout<<"Case "<<t+1<<":\n";
        for(i=0;i<m;i++){
            cin>>x>>y;
            if(x<x2&&x>x1&&y<y2&&y>y1)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }

    }
}

