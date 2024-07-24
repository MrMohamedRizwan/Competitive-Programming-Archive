/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* arr, int n, int* returnSize){
    int a[100000]={0};
    for(int i=0;i<n;i++)
    {
        a[arr[i]]++;
    }
    int *brr=(int *)malloc(n*sizeof(int));
    int q=0;
    for(int i=0;i<100000;i++)
    {
        if(a[i]>0)
        {
            if(a[i]==2)
            brr[q++]=i;
        }
    }
    *returnSize=q;
    return brr;
}