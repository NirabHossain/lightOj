#include<bits/stdc++.h>
using namespace std;

queue<int>v;
int main()
{
    int i,j;
    for(i=0;i<6;i++)v.push(i);
    for(i=0;i<6;i++)cout<<v.front(),v.pop();
}

