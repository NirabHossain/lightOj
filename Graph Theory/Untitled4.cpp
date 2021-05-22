#include<bits/stdc++.h>
#define mx 16005
using namespace std;

int m,n,comp[mx];
vector<int>adj[mx],rev[mx],order,res;
bool vis[mx];

int value(int x){
    if(x<0)return 2*(-x-1)+1;
    else return 2*(x-1);
}

int main()
{
    int i=3,t=50,cs=5;
    while(cs--){
            cout<<i<<" "<<cs<<" "<<(i^cs)<<endl;
    }

}

