/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** arr, int r, int* c, int* returnSize, int** returnColumnSizes){
    *returnSize=r;
    *returnColumnSizes=c;
    int rr=0,cc=0;
    //return arr;
    int brr[*c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<(*c);j++)
        {
            brr[j][i]=arr[i][j];
           // printf("%d ",arr[i][j]);
        }
        // printf("\n");
    }
    for(int i=0;i<*c;i++)
    {
        for(int j=0;j<r;j++)
        {
            arr[j][i]=brr[i][j];
        }
        printf("\n");
    }
    return arr;
    

}