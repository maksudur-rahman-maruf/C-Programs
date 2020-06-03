#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,a,b,i,value;
    vector<int> v;
    cin>>n;
    for(i=1; i<=n ;i++)
    {
       cin>>value;
       v.push_back(value);
    }

    cin>>x;
    cin>>a>>b;

    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);

    cout<<v.size()<<endl;
    for(vector<int> ::iterator itr=v.begin();itr!=v.end();itr++)
    {
        cout<<*itr;
        cout<<" ";
    }
}
