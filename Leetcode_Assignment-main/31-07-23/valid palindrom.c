bool isPalindrome(char * a){
    char b[1000000];
    long long int q=0;
    int n=strlen(a);
    for(int i=0;a[i];i++)
    {
        if(isalpha(a[i]))
        {
            b[q++]=tolower(a[i]);
        }
        else if(a[i]>='0'&&a[i]<='9')
        {
            b[q++]=a[i];
        }
    }
    b[q]='\0';
    strcpy(a,b);
    //printf("%s",a);
    int i=0,j=q-1;
    while(i<j)
    {
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++,j--;
    }
    printf("%s",a);
    if(strcmp(a,b)==0)
    return true;
    else
    return false;

}