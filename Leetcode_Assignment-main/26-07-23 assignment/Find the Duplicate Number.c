int comparator (const void * p1, const void * p2)
{
  return (*(int*)p1 - *(int*)p2);
}

int findDuplicate(int* arr, int n){
    qsort(arr, n, sizeof(int), comparator);
    int x;
    for(int i=0;i<n;i++)
    {
        if(i!=n-1&&arr[i]==arr[i+1])
        {
            x=arr[i];
        }
    }

    return x;
}