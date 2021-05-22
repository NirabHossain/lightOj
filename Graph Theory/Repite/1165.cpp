#include<bits/stdc++.h>
using namespace std;

int vis[9][9];
int u[9];

bool prime(int n){
    for(int i = 2; i <= (int)sqrt((float)n); i++)
        if((n<2) ||(n % i == 0)){
        return false;
    }
    return true;
}


int bfs()
{
    long long int i,j,ic=0,s,k,kc,y=0;
    vector<int> v1,v2,v3;
    queue<pair<int,vector<int> > >q;
    for(i=0,s=0;i<8;i++){
        v1.push_back(u[i]);
        if(i+1==u[i])s++;
    }
    if(s==8)return 0;
    q.push(make_pair(ic,v1));

    while(!q.empty()){
        v2=q.front().second;
        ic=q.front().first;
        q.pop();
        for(i=0;i<v2.size();i++){
            for(j=0;j<v2.size();j++){
                int x=abs(v2[i])+abs(v2[j]);
                if(prime(x) &&(v2[i]*v2[j]<0)){
                    v1=v3=v2;int temp=v2[j];

                    v1.erase(v1.begin()+j);
                    if(i<j)v1.insert(v1.begin()+i,temp);
                    else   v1.insert(v1.begin()+i-1,temp);
                    for(k=0,s=0;k<8;k++)if(k+1==abs(v1[k]))s++;
                    if(s==8)return ic+1;

                    for(k=0,s=0;k<8;k++)cout<<v1[k]<<" ";cout<<"\n";

                    if(vis[abs(v1[i])][abs(v1[j])]>3)continue;
                    vis[abs(v1[i])][abs(v1[j])]+=1;
                    q.push(make_pair(ic+1,v1));

                    v3.erase(v3.begin()+j);
                    if(i<j)v3.insert(v3.begin()+i+1,temp);
                    else   v3.insert(v3.begin()+i,temp);
                    for(s=0,k=0;k<8;k++)if(k+1==abs(v3[k]))s++;
                    if(s==8)return ic+1;

                    for(k=0,s=0;k<8;k++)cout<<v3[k]<<" ";cout<<"\n";

                    if(vis[abs(v3[i])][abs(v3[j])]>3)continue;
                    vis[abs(v3[i])][abs(v3[j])]+=1;
                    q.push(make_pair(ic+1,v3));
                    cout<<ic+1<<endl;
                    if(ic==4)return 2;
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


