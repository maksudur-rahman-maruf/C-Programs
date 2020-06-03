#include<stdio.h>

int* sortArray(int a[])
{
   int i,j,temp;
   for(i=0;i<5;i++)
   {
      for(j=i+1;j<5;j++)
      {
          if(a[i]>a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
      }
   }

   return a;

}

int main()
{
    int i,j;
    int *sort;
    int a[] = {10,30,50,40,20};
    sort = sortArray(a);

    for(i=0;i<5;i++)
    {
        printf("%d\n",sort[i]);
    }

}



