#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,T;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>c;
        a=c/2;
        printf("%d %d\n",a,c-a);
    }
}

/*
3

10

7

7


0 10

0 7

1 6
*/
