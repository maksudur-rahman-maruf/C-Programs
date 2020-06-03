
#include<stdio.h>

long DFS(int i);
int G[10][10],visited[10],n;
int tlc, trc,rc,lc;



int main()
{
    int k,l,i,j,u,v,e;
    int query;
    long totalcost;
    scanf("%d",&query);
    for(k=1; k<=query; k++)
    {
        scanf("%d",&n);
        scanf("%d",&e);
        scanf("%d %d",&lc,&rc);

        for(i=1; i<=e; i++)
        {
            scanf("%d %d",&u,&v);
            G[u][v]=1;
            G[v][u]=1;
        }

        ///visited is initialized to zero
        for(i=1; i<=n; i++)
            visited[i]=0;

        if(rc>=lc)
        {
            printf("%d\n",n*lc);
        }
        else
        {
            tlc=0;
            trc=0;
            tlc += lc;
            totalcost = DFS(1);
            printf("%lld\n",totalcost);
        }


    }
}


long DFS(int i)
{
    int j;
    visited[i]=1;
    // printf("\n%d",i);

    for(j=1; j<=n; j++)
    {

        if(visited[j]==0 && G[i][j]==1)
        {

            trc += rc;
            DFS(j);
        }
    }

    for(int p=1; p<=n; p++)
    {
        if(visited[p]==0)
        {
            tlc += lc;
            DFS(p);
        }
    }
    return tlc+trc;

}
