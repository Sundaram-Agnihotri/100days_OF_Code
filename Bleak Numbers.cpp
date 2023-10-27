int is_bleak(int n)
{
    int x=log2(n);
    for(int i=1;i<=x;i++)
    {
        int y=n-i;
        int c=0;
        while(y>0)
        {
            y=y&(y-1);
            c++;
        }
        if(c==i)
        return 0;
    }
    r
