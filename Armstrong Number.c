#include<stdio.h>
int main()
{
    int i,r,sum=0,n,temp;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp=n;
    while(n>0)
    {
        r = n%10;
       sum = sum + (r*r*r);
        n=n/10;
    }

    if(sum==temp)
    {
        printf("%d is Armstrong Number",temp);
    }
    else
    {
         printf("%d is not Armstrong Number",temp);

    }
}
