char * reverseWords(char * a){
    char b[10000][10000];
    int x=0,y=0;
    for(int i=0;a[i];i++)
    {
        if(a[i]!=' ')
        {
            b[x][y++]=a[i];
        }
        else
        {
            x++;
            y=0;
            b[x][y]=0;
        }
    }
    for(int i=x-1;i>=0;i--)
    {
        printf("%s ",b[i]);
    }
    return a;

}