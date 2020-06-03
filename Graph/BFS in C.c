#include<stdio.h>

int visited[1000];
int cost[1000];
int g[100][100];
int qu[1000], front = 0, rear = -1;

void BFS(int sx,int nodes)
{
    int i,j,x,y;
    for(i=0; i<nodes; i++)
    {
        visited[i]=0;
        /// cost[i]=1000000;
    }

    visited[sx]=1;

    /// cost[sx]=0;


    qu[++rear] = sx;
    printf("%d ",sx);

    while(front <= rear)
    {
        x = qu[front];
        front++;

        for(i=1; i<=nodes; i++)
        {
            if(visited[i] == 0 && g[x][i] == 1 )
            {
                visited[i] = 1;
                qu[++rear] = i;
                printf("%d ",i);
            }
        }
    }
}

int main()
{
    /// freopen("st.txt","rt",stdin);
    int n,e,i,j,x,y,start_node;

    printf("Enter number of nodes: ");
    while(scanf("%d",&n) && n)
    {

       /*
       printf("Enter the adjacency matrix: \n");
         for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                 scanf("%d",&g[i][j]);
            }
        }
        */


        printf("Enter number of total edges: \n");
        scanf("%d",&e);
        for(i=1; i<=e; i++)
        {
            scanf("%d",&x);
            scanf("%d",&y);
            g[x][y]=1;
            g[y][x]=1;
        }


        printf("Starting node: ");
        scanf("%d",&start_node);
        BFS(start_node,n);

    }
}
