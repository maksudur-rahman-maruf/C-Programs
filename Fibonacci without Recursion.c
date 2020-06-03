#include<stdio.h>
int main()
{
    int number,n1=0,n2=1,n3,i;
    printf("Enter number: ");
    scanf("%d",&number);
    printf("Fibonacci numbers are: %d %d",n1,n2);
    for(i=2;i<number;i++)
    {
        n3 = n1 + n2;
        printf(" %d",n3);
        n1 = n2;
        n2 = n3;
    }

}
