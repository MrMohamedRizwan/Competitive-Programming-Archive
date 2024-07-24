bool isAnagram(char * s, char * t){
    int a[128]={0};
    int b[128]={0};
    for(int i=0;s[i];i++)
    {
        a[s[i]]++;
    }
    for(int i=0;t[i];i++)
    {
        b[t[i]]++;
    }
    if(strlen(s)!=strlen(t))
    {
        return false;
    }
    for(int i=0;i<128;i++)
    {
        if(b[i]>0)
        {
            if(a[i]!=b[i])
            {
                return false;
            }
        }
    }
    return true;

}