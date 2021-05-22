#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,m1,m2,n,i,temp,k,a1[26],b1[26];
    char a[120],b[120];
    cin>>T;getchar();
    for(t=0;t<T;t++){
        memset(a1,0,sizeof a1);memset(b1,0,sizeof b1);
        gets(a);gets(b);
        for(i=0;a[i];i++){
            if(a[i]==' ')continue;
            if(a[i]>90)a[i]-=32;
            a1[a[i]-65]=1;
        }
        for(i=0;b[i];i++){
            if(b[i]==' ')continue;
            if(b[i]>90)b[i]-=32;
            b1[b[i]-65]=1;
        }
        for(i=0,k=0;i<26;i++){
            if(a1[i]!=b1[i]){
                printf("Case %d: No\n",t+1);k++;break;
            }
        }
        if(k==0)printf("Case %d: Yes\n",t+1);
    }
}

/*
3
Tom Marvolo Riddle
I am Lord Voldemort
I am not Harry Potter
Hi Pretty Roar to man
Harry and Voldemort
Tom and Jerry and Harry

*/
