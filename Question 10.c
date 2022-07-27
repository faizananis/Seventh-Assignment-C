int main()
{
    int i=0;
    int j=0;
    int k=0;
    int digit=1;
    int num=0;
    int sum=0;
    printf(" Following are the Armstrong Numbers under 1000: \n\n");
    for(i=0;i<=1000;i++)
    {
        sum=0;
        num=i;
        for(j=0;num!=0;j++)
        {
            num=num/10;
        }
        num=i;
        while(num!=0)
        {
            digit=1;
            for(k=1;k<=j;k++)
            {
                digit=digit*(num%10);
            }
            sum=sum+digit;
            num=num/10;
        }
        if(sum==i)
        {
            printf(" %d\n",i);
        }
    }
    return 0;
}
