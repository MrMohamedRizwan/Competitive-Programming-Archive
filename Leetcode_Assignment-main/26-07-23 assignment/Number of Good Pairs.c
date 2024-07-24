int numIdenticalPairs(int* arr, int n){
    int ctr=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                ctr++;
            }
        }
    }
    return ctr;
}