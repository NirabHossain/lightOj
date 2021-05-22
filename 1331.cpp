#include<bits/stdc++.h>
using namespace std;
 int main()
 {
      int i,t;
      double r1,r2,r3,a,b,c,t1,t2,t3,s;
cin>>t;
for(i=0;i<t;i++){
    cin>>r1>>r2>>r3;
      a=r1+r2;
      b=r2+r3;
      c=r1+r3;
      t2=acos((a*a+b*b-c*c)/(2*a*b));
      t3=acos((c*c+b*b-a*a)/(2*c*b));
      t1=acos((a*a+c*c-b*b)/(2*a*c));
      s=(a+b+c)/2;
      s=sqrt(s*(s-a)*(s-b)*(s-c))-.5*(r1*r1*t1+r2*r2*t2+r3*r3*t3);
      printf("Case %d: %.10lf\n",i+1,s);
//      cout<<"Case "<<i+1<<": "<<s<<endl;
 }
 }
//3 1 1 1 2 2 2 3 3 3
