#include<stdio.h>


void SelectionSort(int A[], int n)
{
    int i,j,min, temp;
    for(i=0; i<n-1; i++)
    {
        min = i;
        for(j=i+1; j<n; j++)
        {
            if(A[min]>A[j])
                min = j;
        }

        temp = A[i];
        A[i] = A[min];
        A[min] = temp;

    }


}




int main()
{
    int A[] = {2,7,4,1,5,3};
    SelectionSort(A,6);

    int i;
    for(i=0; i<6; i++)
    {
        printf("%d ",A[i]);
    }
}
