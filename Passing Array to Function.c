#include<stdio.h>

void printArray(int a[])
{
   int i;
   for(i=0;i<5;i++)
   {
       printf("%d\n",a[i]);
   }

}

int main()
{
    int a[] = {10,30,50,40,20};
    printArray(a);
}


