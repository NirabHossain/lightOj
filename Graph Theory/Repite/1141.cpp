#include<bits/stdc++.h>
using namespace std;
const int N=168;
int p[N],k,m,cnt;
map<int,vector<int> > mp;
bool vis[1001];

int bfs(int w, int ic)
{
    queue<pair<pair<int,vector<int> >, int> >q;
    q.push(make_pair(make_pair(w,mp[w]),ic));
    while(!q.empty()){
        int x1=q.front().first.first;
        int c=q.front().second;
        vector<int> v=q.front().first.second;
        q.pop();//cout<<c<<" "<<x1<<"          ";for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
        for(int i=0;i<v.size();i++){
            int x=x1+v[i];
            if(x==m){cnt=c;return 0;}
            if(x>m||vis[x])continue;
            for(int j=0;j<N;j++)if(x%p[j]==0&&p[j]!=x)mp[x].push_back(p[j]);
            q.push(make_pair(make_pair(x,mp[x]),c+1));
            vis[x]=true;
        }
    }
}

int main()
{
    int i,T=1,t=0,n=1001,s;
    for(n=1000;n>1;n--){
        for(i=2;i<=(int)sqrt(n);i++)if(n%i==0)break;
        if(i==(int)sqrt(n)+1)p[t++]=n;
    }
    for(cin>>t;t--;){
        cin>>k>>m;
        for(i=0,cnt=-1;i<N;i++)if(k%p[i]==0 &&p[i]!=k)mp[k].push_back(p[i]);
        if(k==m)cnt=0;
        else bfs(k,1);
        cout<<"Case "<<T++<<": "<<cnt<<endl;
        mp.clear();
        memset(vis,0,sizeof vis);
    }
}
