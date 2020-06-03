#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,value,i;
    vector <int> v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>value;
        v.push_back(value);
    }

    sort(v.begin(),v.end());
     for(vector<int> ::iterator itr=v.begin();itr!=v.end();itr++)
     {
         cout<<*itr<<endl;

     }


}
