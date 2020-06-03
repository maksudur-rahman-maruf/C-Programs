
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
        sum = sum + r;
        n=n/10;
    }

    printf("Sum of the digits of %d is %d",temp,sum);

}
