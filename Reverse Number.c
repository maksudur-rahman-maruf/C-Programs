

#include<stdio.h>
int main()
{
    int i,r,reverse=0,n,temp;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp=n;
    while(n>0)
    {
        r = n%10;
        reverse = (reverse*10) + r;
        n=n/10;
    }

    printf("Sum of the digits of %d is %d",temp,reverse);

}
