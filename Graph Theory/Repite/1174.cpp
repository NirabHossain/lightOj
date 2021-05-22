#include<bits/stdc++.h>
using namespace std;
map<int,vector<int> >mp;
bool vis[102];
int p,path[102];

int bfs(int s)
{
    queue<pair<int,int> >q;
    memset(vis,0,sizeof vis);
    q.push(make_pair(s,1));
    vis[s]=1;
    while(!q.empty()){
        int x1=q.front().first,k1=q.front().second;
        q.pop();
        for(int j=0;j<mp[x1].size();j++){
            int x=mp[x1][j];
            if(vis[x])continue;
            vis[x]=true;
            path[x]+=k1;
            q.push(make_pair(x,k1+1));
        }
    }
}

int main()
{
    int t,T=1,n,r,u,v,s,d,i,j,mx;
    for(cin>>t;t--;){
        cin>>n>>r;
        for(i=0;i<r;i++){
            cin>>u>>v;
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        cin>>s>>d;
        memset(path,0,sizeof path);
        bfs(s),bfs(d);
        for(i=0,mx=0;i<n;i++)mx=max(mx,path[i]);
        cout<<"Case "<<T++<<": "<<mx<<endl;
        mp.clear();
    }
}
/*
1
8
10
0 1
1 2
0 3
2 4
4 5
2 6
5 7
5 0
0 4
3 4
0 6
%%%%%%%%%%%%%%%%%%%%%%%%%%% Case 9: 6
*/





