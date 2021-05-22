#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,t,m1,m2,n,i,temp,k,d1,d2,y1,y2;
    string a1,a2,c[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November","December"};
    char b;
    map<string,int>mp;
    for(i=0;i<12;i++)mp[c[i]]=i+1;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>a1>>d1>>b>>y1>>a2>>d2>>b>>y2;
        if(mp[a1]>2)y1++;
        if(mp[a2]<2||(mp[a2]==2 and d2<29))y2--;
        y1--;
        temp=y2/4-y1/4+y2/400-y1/400+y1/100-y2/100;
        cout<<"Case "<<t+1<<": "<<temp<<endl;
    }
}

//4 January 12, 2012 March 19, 2012 August 12, 2899 August 12, 2901 August 12, 2000 August 12, 2005 February 29, 2004 February 29, 2012
