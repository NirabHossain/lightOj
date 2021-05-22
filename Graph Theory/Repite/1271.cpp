    #include<bits/stdc++.h>
    using namespace std;
    int n,a[59999],track[59999];
    vector<int>adj[59999];
    bool vis[59999];

    void bfs(int st,int ed)
    {
        for(int i=1;i<=50000;i++){
            track[i]=i;
            vis[i]=false;
            sort(adj[i].begin(),adj[i].end());
        }
        queue<int>q;
        q.push(st);
        vis[st]=true;
        while(!q.empty()){
            int u=q.front();
            if(u==ed)return;
            q.pop();
            for(int i=0;i<adj[u].size();i++){
                int v=adj[u][i];
                if(!vis[v]){
                    track[v]=u;
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
    }

    void printAns(int u)
    {
        if(track[u]==u){
            cout<<u;
            return;
        }
        printAns(track[u]);
        cout<<" "<<u;
    }

    int main()
    {
        int cs;
        cin>>cs;
        for(int t=0;t<cs;t++){
            cin>>n;
            for(int i=1;i<=50000;i++)adj[i].clear();
            for(int i=1;i<=n;i++)cin>>a[i];
            for(int i=2;i<=n;i++){
                adj[a[i-1]].push_back(a[i]);
                adj[a[i]].push_back(a[i-1]);
            }
            bfs(a[1],a[n]);
            cout<<"Case "<<t+1<<":\n";
            printAns(a[n]);
            puts("");
        }
    }

