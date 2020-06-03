
#include<bits/stdc++.h>

using namespace std;

bool visited[1000];
int dis[1000];
vector<int>g[1000];

int BFS(int sx,int TTL_value,int unique_nodes)
{
    int i,j,x,y;
    int not_reachable=0;
    for(i=0; i<1000; i++)
    {
        visited[i]=0;
        dis[i]=0;
    }

    visited[sx]=1;
    dis[sx]=0;

    queue<int>q;

    q.push(sx);

    int count=0;
    int check=0;
    while(!q.empty())
    {
        x=q.front();
        q.pop();

        for(i=0; i<g[x].size(); i++)
        {
            y=g[x][i];
            check=1;
            if(visited[y]==0)
            {
                count++;
                q.push(y);
                visited[y]=1;
                dis[y]=dis[x]+1;


            }
        }


        if(dis[x]>TTL_value)
            not_reachable++;


    }


    if(unique_nodes!=count+1 && count!=0)
        not_reachable = not_reachable + (unique_nodes-count-1);

    if(count==0 && check==1)
        not_reachable = not_reachable + (unique_nodes-count-1);

    if(count==0 && check==0)
        not_reachable = not_reachable + (unique_nodes-count);




    return not_reachable;
}

int main()
{
    /// freopen("st.txt","rt",stdin);
    int e,i,x,y,s,value,Case=0;
    int unique_nodes;
    int convertedValue1;
    int convertedValue2;

    while(cin>>e)
    {

        if(e==0) break;

        map<int,int>mp1;
        map<int,int>mp2;

        int now=0;

        for(i=1; i<=e; i++)
        {
            ///cin>>x>>y;
            scanf("%d %d",&x,&y);

            if(mp1[x]==0)
            {
                now++;
                mp1[x]=1;
                mp2[x]=now;
            }

            if(mp1[y]==0)
            {
                now++;
                mp1[y]=1;
                mp2[y]=now;
            }

            convertedValue1 = mp2[x];
            convertedValue2 = mp2[y];

            g[convertedValue1].push_back(convertedValue2);
            g[convertedValue2].push_back(convertedValue1);


        }

        unique_nodes = mp2.size();

        int not_reachable;
        int convertedSource;
        while(scanf("%d",&s) && scanf("%d",&value))
        {
            if(s==0 && value==0) break;
            convertedSource = mp2[s];
            not_reachable = BFS(convertedSource,value,unique_nodes);
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++Case,not_reachable,s,value);
        }

        mp1.clear();
        mp2.clear();

        for(int j=0; j<1000; j++)
            g[j].clear();
    }
}
