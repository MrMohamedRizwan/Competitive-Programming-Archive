int countNegatives(int** arr, int n, int* c){
    int ctr=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<*c;j++)
        {
            printf("%d ",arr[i][j]);
            if(arr[i][j]<=-1)
            ctr++;
        }
        printf("\n");
    }
    return ctr;

}