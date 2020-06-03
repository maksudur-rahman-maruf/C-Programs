#include<stdio.h>
int main()
{
    int n,i,j,k,a,b,c;
    printf("Enter the limit\n");
    scanf("%d",&n);

    printf("Fibonacci Triangle\n");
    for(i=1;i<=n;i++)
    {
        a=0;
        b=1;
        printf("%d\t",b);

        for(j=1;j<i;j++)
        {
            c = a + b;
            printf("%d\t",c);
            a = b;
            b = c;
        }

        printf("\n");
    }
}
