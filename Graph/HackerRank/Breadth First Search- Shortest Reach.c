
#include <stdio.h>

int g[1000][1000];

int* bfs(int nodes, int m, int sx, int* result_count)
{

    int visited[1000];
    int cost[1000];
    int qu[1000], front = 0, rear = -1;
    int dis;
    int a[1000],p;


    dis=0;
    int i,j,x,y;
    for(i=1; i<=nodes; i++)
    {
        visited[i]=0;
        cost[i]=-1;
    }

    visited[sx]=1;

    /// cost[sx]=0;


    qu[++rear] = sx;
    //printf("%d ",sx);

    while(front <= rear)
    {
        x = qu[front];
        front++;

        dis++;

        for(i=1; i<=nodes; i++)
        {
            if(visited[i] == 0 && g[x][i] == 1 )
            {
                cost[i] = dis*6;
                visited[i] = 1;
                qu[++rear] = i;
                //printf("%d ",i);
            }
        }
    }

    p=0;
    for(i=1; i<=nodes; i++)
    {
        if(i==sx) continue;

        a[p++] = cost[i];
    }

    *result_count = p;

    return a;



}

int main()
{
    int n,e,i,j,x,y,start_node,z,testcase;
    int result_count;
    int *finalresult;
    scanf("%d",&testcase);

    for(z=1; z<=testcase; z++)
    {
        scanf("%d",&n);
        scanf("%d",&e);

        for(i=0;i<1000;i++)
        {
            for(j=0;j<1000;j++)
            {
                g[i][j]=0;
            }
        }

        for(i=1; i<=e; i++)
        {
            scanf("%d",&x);
            scanf("%d",&y);
            g[x][y]=1;
            g[y][x]=1;
        }

        scanf("%d",&start_node);

        finalresult = bfs(n,e,start_node, &result_count);

        for(i=0; i<result_count; i++)
        {
            printf("%d ",finalresult[i]);
        }
        printf("\n");

    }
}
