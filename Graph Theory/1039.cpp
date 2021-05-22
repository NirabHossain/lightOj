#include<bits/stdc++.h>
using namespace std;
const int N=26;
int p[N][N][N],v[N][N][N],r,c,n;
struct point
{
    int x,y,z;
    point(){};
    point(int x, int y, int z){this->x; this->y; this->z;}
};

int main()
{
    int i,t,T,j,k,n;
    string str1,str2,s1,s2,s3;
    cin>>T;t=0;
    while(T--){
        cin>>str1>>str2>>n;
        for(i=0;i<n;i++){
            cin>>s1>>s2>>s3;
            for(int j1=0; j1<s1.length();j1++)for(int j2=0; j2<s2.length();j2++)
            for(int j3=0; j3<s3.length();j3++)v[s1[j1]-'a'][s2[j2]-'a'][s3[j3]-'a']=-1;
        }
        if(v[str1[0]-'a'][str1[1]-'a'][str1[0]-'a']==-1){
            cout<<"Case "<<t++<<": -1\n";continue;
        }
        p
    }
}
