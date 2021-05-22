#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,m,i1,temp;
    string s;
    cin>>t;
    for(i1=0;i1<t;i1++){
        cin>>m>>n;
        deque<int>q;
        cout<<"Case "<<i1+1<<":\n";
        for(i=0;i<n;i++){
            cin>>s;
            if(s=="pushLeft"||s=="pushRight"){
                cin>>temp;
                if(q.size()==m)cout<<"The queue is full\n";
                else{
                    if(s=="pushLeft"){
                        cout<<"Pushed in left: "<<temp<<endl;
                        q.push_front(temp);
                    }
                    if(s=="pushRight"){
                        cout<<"Pushed in right: "<<temp<<endl;
                        q.push_back(temp);
                    }
                }
            }
            if(s=="popLeft"||s=="popRight"){
                if(q.size()==0)cout<<"The queue is empty\n";
                else{
                    if(s=="popLeft"){
                        cout<<"Popped from left: "<<q.front()<<endl;
                        q.pop_front();
                    }
                    if(s=="popRight"){
                        cout<<"Popped from right: "<<q.back()<<endl;
                        q.pop_back();
                    }
                }
            }
        }

    }
}
//1 3 8 pushLeft 1 pushLeft 2 pushRight -1 pushRight 1 popLeft popRight popLeft popRight












