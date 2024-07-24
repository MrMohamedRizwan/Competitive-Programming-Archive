int maximumWealth(int** arr, int n, int* cc){
    int a[n];
    int c=*cc;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            sum+=arr[i][j];
            //printf("%d ",sum);
        }
        //printf("%d \n",sum);
        a[i]=sum;
    }

    int max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}