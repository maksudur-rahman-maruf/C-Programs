#include<stdio.h>
int main()
{
    int A[] = {3,7,5,9,2};

    int i,j,temp;
    for(i=0; i<5; i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(A[i]>A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    for(i=0; i<5; i++)
    {
        printf("%d ",A[i]);
    }
}
