#include<stdio.h>
int main()
{
    int i=0,j,n,k;
    int a[20];
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n>0)
    {
        a[i++] = n%2;
        n=n/2;
    }

   for(k=i-1;k>=0;k--)
   {
       printf("%d",a[k]);
   }
}
