#include<stdio.h>

int g[201][201];
int visited[201],cost[201],qu[201],rear=-1,front=0;
int BFS(int s, int node)
{
    int x,i;

    visited[s]=1;
    cost[s]=1;
    qu[++rear]=s;
    ///printf("%d ",s);

    while(front<=rear)
    {
        x=qu[front++];

        for(i=s; i<node; i++)
        {
            if(visited[i]==0 && g[x][i]==1)
            {
                visited[i]=1;
                qu[++rear]=i;
                /// printf("%d ",i);

                if(cost[x]==1)
                    cost[i]=2;
                else if(cost[x]==2)
                    cost[i]=1;

            }

            if(g[x][i]==1)
            {
                if(cost[x]==cost[i])
                    return 0;
            }
        }

    }

    return 1;


}


int main()
{
    int node,edge,i,j,a,b;
    while(scanf("%d",&node) && node>0)
    {
        for(i=0; i<200; i++)
        {
            visited[i]=0;
            cost[i]=0;
            qu[i]=0;

            for(j=0; j<200; j++)
            {
                g[i][j]=0;
            }
        }

        scanf("%d",&edge);
        for(i=1; i<=edge; i++)
        {
            scanf("%d %d",&a,&b);
            g[a][b]=1;
            g[b][a]=1;
        }

        int bicolorable = BFS(0,node);
        if(bicolorable==1)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");
    }
}
