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
        cin>>type>>X;;
        if(type==1)
        {
            cin>>Y;
            mp[X] += Y;
        }

        else if(type==2)
        {
            mp.erase(X);
        }

        else if(type=3)
        {
            cout<<mp[X]<<endl;
        }



    }
}
