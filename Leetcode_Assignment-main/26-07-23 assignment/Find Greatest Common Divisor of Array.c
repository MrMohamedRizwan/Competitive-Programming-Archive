int findGCD(int* arr, int n){
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    int gcd=0;
    for(int i=1;i<=max&&i<=min;i++)
    {
        if(max%i==0&&min%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}