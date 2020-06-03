#include<stdio.h>
int main()
{
    int i,j,ch=65;
    printf("Print a Alphabet Triangle\n");
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("%c",ch++);
        }
        ch--;

        for(j=1;j<i;j++)
        {
            printf("%c",--ch);
        }
        printf("\n");
        ch=65;
    }
}
