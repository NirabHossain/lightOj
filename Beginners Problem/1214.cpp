#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,t,m,n,i,temp;
    cin>>T;
    for(t=0;t<T;t++){
        string a;
        cin>>a>>m;
        for(i=0,n=0;i<a.size();i++){
            if(a[i]=='-')continue;
            n=10*n+a[i]-48;
            n=n%m;
        }
        n?cout<<"Case "<<t+1<<": not divisible\n":cout<<"Case "<<t+1<<": divisible\n";
    }
}
/*

6 101 101 0 67 -101 101 7678123668327637674887634 101 11010000000000000000 256 -202202202202000202202202 -101


Case 1: divisible

Case 2: divisible

Case 3: divisible

Case 4: not divisible

Case 5: divisible

Case 6: divisible
*/
