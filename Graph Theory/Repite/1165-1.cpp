#include<bits/stdc++.h>
using namespace std;

bool vis[9][9][9][9][9][9][9][9];
int u[9];

bool prime(int n){
    for(int i = 2; i <= (int)sqrt((float)n); i++)
        if((n>1)&& (n % i == 0)){
        return false;
    }
    return true;
}


int bfs()
{
    long long int ic=0,s,k,kc,y=0;
    vector<int> v1,v2,v3;
    queue<pair<int,vector<int> > >q;
    for(int i=0;i<8;i++)v1.push_back(u[i]);
    vis[abs(v1[0])][abs(v1[1])][abs(v1[2])][abs(v1[3])][abs(v1[4])][abs(v1[5])][abs(v1[6])][abs(v1[7])]=1;
    if(vis[1][2][3][4][5][6][7][8])return ic;
    q.push(make_pair(ic,v1));
    while(!q.empty()){
        v2=q.front().second;
        ic=q.front().first;
        q.pop();
        for(int i=0;i<v2.size();i++){
            for(int j=0;j<v2.size();j++){
                int x=abs(v2[i])+abs(v2[j]);
                if(prime(x) &&v2[i]*v2[j]<0){
                    v1=v3=v2;int temp=v2[j];

                    v1.erase(v1.begin()+j);
                    if(i<j)v1.insert(v1.begin()+i,temp);
                    else   v1.insert(v1.begin()+i-1,temp);
    if(vis[abs(v1[0])][abs(v1[1])][abs(v1[2])][abs(v1[3])][abs(v1[4])][abs(v1[5])][abs(v1[6])][abs(v1[7])])continue;
    vis[abs(v1[0])][abs(v1[1])][abs(v1[2])][abs(v1[3])][abs(v1[4])][abs(v1[5])][abs(v1[6])][abs(v1[7])]=1;
                    q.push(make_pair(ic+1,v1));

                    v3.erase(v3.begin()+j);
                    if(i<j)v3.insert(v3.begin()+i+1,temp);
                    else   v3.insert(v3.begin()+i,temp);
    if(vis[abs(v3[0])][abs(v3[1])][abs(v3[2])][abs(v3[3])][abs(v3[4])][abs(v3[5])][abs(v3[6])][abs(v3[7])])continue;
    vis[abs(v3[0])][abs(v3[1])][abs(v3[2])][abs(v3[3])][abs(v3[4])][abs(v3[5])][abs(v3[6])][abs(v3[7])]=1;
                    q.push(make_pair(ic+1,v3));

                    if(vis[1][2][3][4][5][6][7][8])return ic+1;
                }
            }
        }
    }
    return -1;
}

int main()
{
    int i,n,T=0,t,k;
    for(cin>>t;t--;){
        for(i=0;i<8;i++){
            cin>>k;
            u[i]=k;
        }
        memset(vis,0,sizeof vis);
        cout<<"Case "<<++T<<": "<<bfs()<<endl;
    }
}

/*
6
-2 -4 1 3 -7 -5 -8 -6
4 8 5 6 -3 7 1 -2
8 3 6 -1 -4 7 -5 -2
1 -6 7 2 -3 -8 5 -4
-1 -2 8 6 -7 3 5 -4
-1 3 -6 7 5 -8 2 -4
*/


