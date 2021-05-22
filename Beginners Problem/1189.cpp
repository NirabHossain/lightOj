#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,t,m,n,ic,i,temp,a[22],b[22];
    for(t=2,a[0]=a[1]=1;t<=20;t++){a[t]=a[t-1]*t;}
    cin>>T;
    for(t=0;t<T;t++){
        cin>>n;cout<<"Case "<<t+1<<": ";
        i=20;n++;ic=0;
        while(n>=0 && i>=0){
            if(a[i]<n){b[++ic]=i; n=n-a[i];}
            i--;
        }
        if(n>1){cout<<"impossible\n";}
else{        for(i=ic;i>1;i--){
            cout<<b[i]<<"!+";
        }
        cout<<b[i]<<"!\n";
    }
    }

}

/*

4 7 7 9 11


Case 1: 1!+3!
Case 2: 0!+3!
Case 3: 1!+2!+3!
Case 4: impossible

*/
