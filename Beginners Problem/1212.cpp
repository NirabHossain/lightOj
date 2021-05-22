#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,m1,m,n,i,temp,k;
    string a;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>m>>n;cout<<"Case "<<t+1<<":\n";
        deque<int>q;
        for(i=0;i<n;i++){
            cin>>a;
            if(a=="pushLeft"||a=="pushRight"){
                cin>>m1;
                if(q.size()==m){cout<<"The queue is full\n";}
                else if(a=="pushLeft"){cout<<"Pushed in left: "<<m1<<endl;q.push_front(m1);}
                else if(a=="pushRight"){cout<<"Pushed in right: "<<m1<<endl;q.push_back(m1);}
            }
            else if(a=="popLeft"||a=="popRight"){
                if(q.size()==0){cout<<"The queue is empty\n";}
                else if(a=="popLeft"){cout<<"Popped from left: "<<q.front()<<endl;q.pop_front();}
                else if(a=="popRight"){cout<<"Popped from right: "<<q.back()<<endl;q.pop_back();}
            }
        }

    }
}
//1 3 8 pushLeft 1 pushLeft 2 pushRight -1 pushRight 1 popLeft popRight popLeft popRight
