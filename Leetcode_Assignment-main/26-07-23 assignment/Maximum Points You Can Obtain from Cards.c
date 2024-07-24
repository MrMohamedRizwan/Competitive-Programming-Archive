int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int maxScore(int* arr, int n, int k){
    int t=0;
    for(int i=0;i<k;i++)
    {
        t+=arr[i];
    }
    int b=t;
    for(int i=k-1,j=n-1;~1;i--,j--)
    {
            t +=arr[j] - arr[i], b = max(b, t);
    }
    return b;

}