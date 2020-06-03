#include<stdio.h>
int main()
{
    int i,j,r,n,temp,sum=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    temp=n;
    while(n>0)
    {
        r = n%10;
        sum = (sum*10) + r;
        n = n /10;
    }
    if(temp==sum)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is not Palindrome");
    }
}
