#include<bits/stdc++.h>
#define bds(x,y) (x>=0&&x<n&&y<n&&y>=0)
using namespace std;
struct node{int i,j,ic;};
int k,n;
char a[20][20];
node find_d(char target,node start)
{
    node temp,epic;
    int b[]={1,0,-1,0},c[]={0,1,0,-1},v[20][20],i,j,ii,jj,l;
    queue<node>q;
    memset(v,0,sizeof v);
    q.push(start);
    while(!q.empty()){
        temp=q.front();
        q.pop();
        i=temp.i;j=temp.j;
        if(a[i][j]==target)return temp;
        for(l=0;l<4;l++){
            ii=i+b[l],jj=j+c[l];
            if(bds(ii,jj)&&(a[ii][jj]=='.'||a[ii][jj]==target)&&v[ii][jj]==0){
                epic.ic=temp.ic+1;
                epic.i=ii,epic.j=jj;
                v[ii][jj]=1;
                q.push(epic);
            }
        }
    }
    temp.ic=INT_MAX;
    return temp;
}

int main()
{
    int m,ic,cs,t,sum,i,j,i1,j1;
    char target;
    node temp;
    cin>>t;
    for(cs=0;cs<t;cs++){
        cin>>n;
        for(i=0,k=-999,sum=0;i<n;i++)for(j=0;j<n;j++){
            cin>>a[i][j];
            k=max(k,a[i][j]-'A'+1);
            if(a[i][j]=='A')i1=i,j1=j;
        }
        temp.i=i1,temp.j=j1;
        for(i=0;i<k;i++){
            temp.ic=0;
            target='A'+i;
            temp=find_d(target,temp);
            if(temp.ic==INT_MAX)break;
            a[temp.i][temp.j]='.';
            sum+=temp.ic;
        }
        cout<<"Case "<<cs+1<<": ";
        if(i==k)cout<<sum<<endl;
        else cout<<"Impossible\n";
    }
}

