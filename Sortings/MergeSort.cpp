#include<iostream>
using namespace std;

void Merge(int A[], int s, int e)
{
    int mid = (s+e)/2;

    int i = s;
    int j = mid+1;
    int k = s;

    int temp[100];

    while(i<=mid && j<=e)
    {
        if(A[i] < A[j])
            temp[k++] = A[i++];
        else
            temp[k++] = A[j++];
    }

    while(i<=mid)
    {
        temp[k++] = A[i++];
    }
    while(j<=e)
    {
        temp[k++] = A[j++];
    }

    for(i=s; i<=e; i++)
    {
        A[i] = temp[i];
    }

}

void mergeSort(int A[], int s, int e)
{
    if(s>=e) return;

    int mid = (s+e)/2;
    mergeSort(A,s,mid);
    mergeSort(A,mid+1,e);
    Merge(A,s,e);

}


int main()
{
    int A[100];
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>A[i];
    }

    mergeSort(A,0,n);

    for(int i=1; i<=n; i++)
    {
        cout<<A[i]<<" ";
    }

}
