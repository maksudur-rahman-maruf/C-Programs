#include<stdio.h>

int g[21][21];
int visited[21],qu[21],distance[21],front=0,rear=-1,x,i;

int BFS(int s,int d)
{

    if(s > d)
    {
        int temp = s;
        s = d;
        d = temp;
    }


    front=0;
    rear=-1;

    for(i=0; i<=20; i++)
    {
        visited[i]=0;
        distance[i]=0;
        qu[i]=0;
    }


    distance[s]=0;
    visited[s]=1;
    qu[++rear]=s;
    /// printf("%d ",s);

    while(front<=rear)
    {
        x = qu[front++];
        for(i=1; i<=20; i++)
        {
            if(visited[i]==0 && g[x][i]==1)
            {
                distance[i]=distance[x]+1;
                visited[i]=1;
                qu[++rear]=i;
                /// printf("%d ",i);
            }
        }
    }

    return distance[d];
}


int main()
{
    int n,T=1;
    while(scanf("%d",&n)==1)
    {
        int i,j,x,N,s,d;

        for(i=1; i<=20; i++)
        {
            for(j=0; j<=20; j++)
            {
                g[i][j]=0;
            }
        }

        for(i=1; i<=19; i++)
        {
            if(i!=1)
            {
                scanf("%d",&n);
            }

            for(j=1; j<=n; j++)
            {
                scanf("%d",&x);
                g[i][x]=1;
                g[x][i]=1;
            }
        }

        scanf("%d",&N);

        int min_no_of_country;

        printf("Test Set #%d\n",T);
        T++;
        for(i=1; i<=N; i++)
        {
            scanf("%d %d",&s,&d);
            min_no_of_country = BFS(s,d);
            if(s>9)
                printf("%d to ",s);
            else if(s<=9)
                printf(" %d to ",s);

            if(d>9)
                printf("%d: %d\n",d,min_no_of_country);
            else if(d<=9)
                printf(" %d: %d\n",d,min_no_of_country);

        }

        printf("\n");

    }
}
