#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Q,y,x,i;
    set<int>s;
    cin>>Q;
    for(i=1; i<=Q; i++)
    {
        cin>>y;
        cin>>x;

        if(y==1)
        {
            s.insert(x);
        }

        else if(y==2)
        {
            s.erase(x);
        }

        else if(y==3)
        {
            set<int>::iterator itr = s.find(x);
            if(itr==s.end())
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
    }
}
