#include<stdio.h>

int BinarySearch(int[],int,int,int);

int main()
{
    int arr[10] = {5,10,15,25,35,50,60,65,85,95};
    int search = BinarySearch(arr,0,9,35);

    if(search != -1)
    {
        printf("Found item at position %d!\n",search);
    }
    else
    {
        printf("Not Found the item!\n");
    }
}

int BinarySearch(int a[],int beg,int end,int item)
{
    int mid;
    while(end>=beg)
    {
        mid = (beg+end)/2;

        if(a[mid]==item)
        {
            return mid+1;
        }

        else if(a[mid]<item)
        {
            beg = mid+1;
        }

        else
        {
            end = mid-1;
        }


    }

    return -1;
}
