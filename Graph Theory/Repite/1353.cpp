#include<bits/stdc++.h>
using namespace std;

int n,ic,k;
vector<int>v1[20001],v2[20001];
bool vis[20001],vis2[20001],bt;


int dfst(int u){
//    cout<<u<<" "<<v2[u].size()<<endl;
    for(int i=0;i<v2[u].size();i++){
        ic=v2[u][i];
        if(!vis2[ic]){
            vis2[ic]=true;
            if(v2[ic].size()==0)k++;
            else dfst(ic);
        }
        else k++;
//        cout<<u<<" "<<ic<<" "<<k<<endl;
    }
}


int dfs(int u){
    vis[u]=true;
    if(v2[u].size()==1 && v1[u].size()==1){
        vis2[ic]=true;
        dfst(ic);
//        cout<<" "<<ic<<endl;
    }
    for(int i=0;i<v1[u].size();i++)if(!vis[v1[u][i]]){
        ic=v1[u][i];
        dfs(ic);
    }
}





int main()
{
    int i,j,t,T=1,r,u,v;
    for(cin>>t;t--;){
        cin>>n;
        for(i=1,ic=0,k=0;i<n;i++){
            cin>>u>>v;
            v1[u].push_back(v);
            v1[v].push_back(u);
            v2[v].push_back(u);
        }
  //      cout<<endl<<endl;
        memset(vis,0,sizeof vis);
        memset(vis2,0,sizeof vis2);

        dfs(ic);
        for(i=0;i<20001;i++){v1[i].clear();v2[i].clear();}




        cout<<"Case "<<T++<<": "<<k<<endl;
    }
}
/*


4
4
0 1
1 2
1 3
5
0 1
1 2
1 3
0 4



6
0 1
1 2
3 1
4 1
5 1

9
0 1
1 2
2 3
3 6
2 4
4 5
1 8
8 9




7
4
0 1
2 1
2 3
9
0 1
1 2
1 3
1 4
2 7
5 7
6 7
7 8
18
0 4
1 4
2 4
3 4
4 5
4 6
5 9
7 9
8 9
9 10
10 11
10 12
10 13
6 14
14 15
14 16
14 17
6
0 2
1 2
2 3
3 4
3 5
17
0 4
1 4
2 4
3 4
5 7
6 7
16 7
4 7
7 9
9 10
9 11
9 12
4 8
8 13
8 14
8 15
5
0 1
2 1
1 3
2 4
6
0 1
1 2
3 1
4 1
5 1



*/


