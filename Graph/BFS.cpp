
#include<bits/stdc++.h>

using namespace std;

bool visited[100000];
int cost[100000];
vector<int>g[100000];

void BFS(int sx,int nodes)
{
    int i,j,x,y;
    for(i=0; i<nodes; i++)
    {
        visited[i]=0;
        cost[i]=1000000;
    }

    visited[sx]=1;
    cost[sx]=0;

    queue<int>q;
    q.push(sx);
    printf("%d ",q.front());

    while(!q.empty())
    {
        x=q.front();
        q.pop();

        for(i=0; i<g[x].size(); i++)
        {
            y=g[x][i];
            if(visited[y]==0)
            {
                q.push(y);
                printf("%d ",y);
                visited[y]=1;


            }
        }
    }
}

int main()
{
    ////// freopen("st.txt","rt",stdin);
    int n,e,i,x,y;
    while(cin>>n && n)
    {
        cin>>e;
        for(i=1; i<=e; i++)
        {
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }

        BFS(0,n);

        for(int j=0; j<n; j++)
            g[j].clear();
    }
}
