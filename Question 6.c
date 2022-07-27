int main()
{
    int i=0;
    int j=0;
    printf(" Following are the Prime Numbers under 100:\n");
    for(i=2;i<=100;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
        {
            printf(" %d\n",i);
        }
    }
    return 0;
}
