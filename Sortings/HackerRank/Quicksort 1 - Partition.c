

int quickSort(int arr_count, int* arr, int* result_count) {

  int i,k=0,p=1;
  int pivot = arr[0];
  int size = arr_count;
  int a[size];
  for(i=1;i<size;i++)
  {
      if(pivot<arr[i])
      {
          a[size-p] = arr[i];
          p++;
      }
      else
      {
          a[k++] = arr[i];
      }
  }
  a[k]=pivot;
  *result_count=size;

  for(i=0;i<size;i++)
    {
        arr[i] = a[i];
    }

  return arr;

}

int main()
{
    int arr[] = {4,5,3,7,2};
    int arr_count=5;
    int result_count;
    int* result = quickSort(arr_count,arr,&result_count);

    int i;
    for(i=0;i<result_count;i++)
    {

        printf("%d ",*(result+i));
       // printf("%d ",*(arr+i));
    }

}

