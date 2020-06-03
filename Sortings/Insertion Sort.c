#include<stdio.h>


void Insertion(int *A, int n)
{
    int i;
    for(i=1; i<=n-1; i++)
    {
        int value = A[i];
        int hole = i;

        while(hole>0 && A[hole-1]>value)
        {
            A[hole] = A[hole-1];
            hole--;
        }

        A[hole] = value;
    }


}

int main()
{
    int A[] = {3,7,5,9,2};
    Insertion(A,5);

    int i;
    for(i=0; i<5; i++)
    {
        printf("%d ",A[i]);
    }
}
