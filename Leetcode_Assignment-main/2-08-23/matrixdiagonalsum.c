int diagonalSum(int** arr, int r, int* c){
    int sum=0;
    int x=*c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(i==j)
            {
                sum+=arr[i][j];
            }
            if(i+j==r-1)
            {
                sum+=arr[i][j];
            }
        }
    }
    if(r%2!=0)
    sum=sum-arr[r/2][r/2];
    
    return sum;
}