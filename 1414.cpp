#include<bits/stdc++.h>
using namespace std;
int main()
{
    string m1,m2,m[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    long long t,n,d1,d2,y1,y2;
    char ch;
    map <string,int> mp;
    cin>>t;
    for(int i=0;i<12;i++)mp[m[i]]=i;
    for(int i=0;i<t;i++){
        cin>>m1>>d1>>ch>>y1;
        cin>>m2>>d2>>ch>>y2;
        if(mp[m1]>1)y1++;
        if(mp[m2]==0||(mp[m2]==1&&d2<29))y2--;
        y1--;
        long long ans=y2/4-y1/4;
        ans-=y2/100-y1/100;
        ans+=y2/400-y1/400;
        printf("Case %d: %lld\n",i+1,ans);
    }
}
///4 January 12, 2012 March 19, 2012 August 12, 2899 August 12, 2901 August 12, 2000 August 12, 2005 February 29, 2004 February 29, 2012

