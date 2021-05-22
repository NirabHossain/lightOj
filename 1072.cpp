#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n;
    float r,R;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>R>>n;
        printf("Case %d: %.10f\n",i+1,R/(1+1/sin(2*acos(0.0)/n)));
//        cout<<"Case "<<i+1<<": "<<R/(1+1/sin(2*acos(0.0)/n))<<endl;
    }
}
