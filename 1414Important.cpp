#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,t,n,d1,d2,y1,y2;
    char ch;
    string m1,m2,m[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    map<string,int>mp;
    for(i=0;i<12;i++)mp[m[i]]=i;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>m1>>d1>>ch>>y1>>m2>>d2>>ch>>y2;
        if(mp[m1]>1)y1++;
        if(mp[m2]==0||(mp[m2]==1&&d2<29))y2--;
        y1--;
        long long ans=y2/4-y1/4;
        ans-=y2/100-y1/100;
        ans+=y2/400-y1/400;
        cout<<"Case "<<i+1<<": "<<ans<<endl;
    }
}
