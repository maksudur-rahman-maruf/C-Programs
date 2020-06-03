#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;
    int Q,Y,i,key,value,type;
    string X;
    cin>>Q;
    for(i=1;i<=Q;i++)
    {
        cin>>type>>X;
        map<string,int>::iterator itr = mp.find(X);

        if(type==1)
        {
            cin>>Y;

            if(itr!=mp.end())
            {
                itr->second+=Y;
            }

            mp.insert(make_pair(X,Y));


        }

        else if(type==2)
        {
            mp.erase(X);
        }

        else if(type=3)
        {
          if(itr==mp.end())
          {
             itr->second=0;
          }
           cout<<itr->second<<endl;
        }



    }
}

