#include<bits/stdc++.h>
using namespace std;
int main()
{

    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);

    int t;
    cin>>t;
    for(int i1=0;i1<t;i1++)
    {
        double x,y,c;
        scanf("%lf %lf %lf",&x,&y,&c);

        double lo=0.0,hi=max(x,y);

        for(int i=0;i<50;i++)
        {
            double mid=(lo+hi)/2;
            double h2=sqrt(y*y-mid*mid);
            double h1=sqrt((x*x)-(mid*mid));
            double temp_ans=(1.0/h1)+(1.0/h2);
            temp_ans=1.0/temp_ans;
            if(temp_ans>=c)
                lo=mid;
            else
                hi=mid;
        }
        printf("%.10lf\n",lo);

    }

    return 0;
}
