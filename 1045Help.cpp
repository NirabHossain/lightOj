    #include<bits/stdc++.h>
    using namespace std;

    double logg[1000005];

    int main()
    {
        int t, n, b;
        logg[0] = 0;
        for(int i=1;i<=1000000;i++)
            logg[i]=logg[i-1] + log(i);
         scanf("%d", &t);
         for(int cas=1;cas<=t;cas++)
         {
            scanf("%d %d", &n, &b);
            long long cnt=logg[n]/log(b) + 1;
            printf("Case %d: %lld\n", cas, cnt);
        }
        return 0;
    }
//5 5 10 8 10 22 3 1000000 2 0 100
