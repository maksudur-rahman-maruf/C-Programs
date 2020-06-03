#include<bits/stdc++.h>
using namespace std;

int Partition(int A[],int start,int end)
{
    int partitionIndex = start;
    int pivot = A[end];

    for(int i=start; i<end; i++)
    {
        if(A[i]<=pivot)
        {
            swap(A[i],A[partitionIndex]);
            partitionIndex++;
        }
    }

    swap(A[partitionIndex],A[end]);
    return partitionIndex;

}

void QuickSort(int A[],int start,int end)
{
    if(start<end)
    {
        int partitionIndex = Partition(A,start,end);
        QuickSort(A,start,partitionIndex-1);
        QuickSort(A,partitionIndex+1,end);
    }
}

int main()
{
    int A[] = {7,2,1,6,8,5,3,4};
    QuickSort(A,0,7);
    printf("size %d",sizeof(A));

    int i;
    for(i=0; i<8; i++)
    {
        printf("%d ",A[i]);
    }
}

