
#include<bits/stdc++.h>

#define _fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pi acos(-1)
#define MAXS 100000
#define MOD 1000000007
#define all(v) v.begin(),v.end()

using namespace std;
typedef long long ll;

int tc;

void solve(){

    int nodes,node;

    cin>>nodes;

    map<int,int>mp1;
    map<int,int>mp2;

    int now=0;
    for(int i=1; i<=nodes; i++){
        cin>>node;
        if(mp1[node]==0)now++;

        mp1[node]=1;
        mp2[node]=now;
    }

    return;
}

int main()
{

    _fastIO;

    //cin>>tc; while(tc--)
    solve();

    return 0;
}
