#include<bits/stdc++.h>
using namespace std;
map<int,vector<int> >mp;
map<int,vector<int> >::iterator it;
queue<int>q;
int vis[20010];

int bfs(int src){
    q.push(src);
    vis[src]=1;
    int m1=1,m2=0;
    while(!q.empty()){
        int x1=q.front();
        q.pop();
        for(int i=0;i<mp[x1].size();i++){
            int x=mp[x1][i];
            if(vis[x]==-1){
                vis[x]=(vis[x1]+1)%2;
                if(vis[x]==1)m1++;
                else m2++;
                q.push(x);
            }
        }
    }
    return max(m1,m2);
}

int main()
{
    int t,T=0,i,j,k,m,n,u,v;
    for(cin>>t;t--;){
        for(cin>>n;n--;){
            cin>>u>>v;
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        memset(vis,-1,sizeof vis);
        for(k=0,it=mp.begin();it!=mp.end();it++)
            if(vis[it->first]==-1)k+=bfs(it->first);
            cout<<"Case "<<++T<<": "<<k<<endl;
        mp.clear();
    }
}

/*
1
11
1 9
20 2
9 3
4 5
14 7
22 4
22 2
3 2
17 1
15 2
4 1
*/
