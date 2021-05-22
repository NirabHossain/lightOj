#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,ok,t,i,i1,cnt[28];
    char x[110],y[110],temp[110],c,ans[10];
    cin>>t;
    for(i1=0;i1<t;i1++){
        scanf("\n");
        fgets(x,104,stdin);
        scanf("\n");
        fgets(y,104,stdin);
        memset(cnt,0,sizeof cnt);
        for(i=0;i<strlen(x);i++){
            if(x[i]!=' '){
                c=tolower(x[i]);
                k=c-'a';
                cnt[k]++;
            }
        }
        for(i=0;i<strlen(y);i++){
            if(y[i]!=' '){
                c=tolower(y[i]);
                k=c-'a';
                cnt[k]--;
            }
        }
        ok=1;
        for(i=0;i<26;i++){
            if(cnt[i]!=0){
                ok=0;
                break;
            }
        }
        strcpy(ans,ok?"Yes\0":"No\0");
        printf("Case %d: %s\n",i1+1,ans);
    }
}
