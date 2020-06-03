#include<stdio.h>
int main()
{
    int i,j,temp=1;
    printf("Print a Alphabet Triangle\n");
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("%d",temp++);
        }
        temp--;

        for(j=1;j<i;j++)
        {
            printf("%d",--temp);
        }
        printf("\n");
        temp=1;
    }
}

