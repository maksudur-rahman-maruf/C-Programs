
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10],b[10][10],sum[10][10],r,c,i,j,k;    // 3*3 mul 3*3
    printf("enter the number of row=");
    scanf("%d",&r);
    printf("enter the number of column=");
    scanf("%d",&c);
    printf("enter the first matrix element=\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the second matrix element=\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Addition of these Matrix=\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

}
