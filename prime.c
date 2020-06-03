#include<stdio.h>
int main()
{
    int i,j,n,m,flag=0;

    printf("Enter a number: ");
    scanf("%d",&n);
    m=n/2;

    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            printf("Number is not prime");
            flag=1;
            break;
        }
    }
    if(n==0 || n==1)
    {
        printf("Number is not prime");
        flag=1;
    }
    if(flag==0)
    {
        printf("Number is prime");
    }
}
