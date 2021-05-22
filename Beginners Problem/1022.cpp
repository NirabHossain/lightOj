#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int T,i;
    double r,pi;

    pi=2*acos(0.0);cin>>T;
    for(i=0;i<T;i++){
        cin>>r;
        printf("Case %d: %.2lf\n",i+1,(4-pi)*r*r);
        //Huge problem this is
        //cout<<"Case "<<i+1<<": "<<(4-pi)*r*r<<endl;
    }
}

/*

3

20
30.091
87.0921


Case 1: 343.36
Case 2: 777.26
Case 3: 6511.05


*/
