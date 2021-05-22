#include<bits/stdc++.h>
using namespace std;
long long a, b, c, d, e, f,x[10005],t,n,n1;
int fn( int n1 ) {
    for(int n=0;n<=n1;n++){
    if( n == 0 ) {x[n]=a;continue;}
    if( n == 1 ) {x[n]=b;continue;}
    if( n == 2 ) {x[n]=c;continue;}
    if( n == 3 ) {x[n]=d;continue;}
    if( n == 4 ) {x[n]=e;continue;}
    if( n == 5 ) {x[n]=f;continue;}
    x[n]=x[n-1]+x[n-2]+x[n-3]+x[n-4]+x[n-5]+x[n-6];
    x[n]=x[n]%10000007;
}
return x[n1];
}
int main()
{


    long long ans;


    cin>>t;

    for (long long i = 1; i <= t; i++) {
        cin >>a>>b>>c>>d>>e>>f>>n;

        ans = fn(n);
        ans = ans % 10000007;

        cout << "Case "<< i <<": "<< ans << endl;
    }


}
/*

5

0 1 2 3 4 5 20

3 2 1 5 0 1 9

4 12 9 4 5 6 15

9 8 7 6 5 4 3

3 4 3 2 54 5 4


Case 1: 216339

Case 2: 79

Case 3: 16636

Case 4: 6

Case 5: 54

*/
