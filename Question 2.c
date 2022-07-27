int main()
{
    int n=0;
    int i=0;
    int a=-1;
    int b=1;
    int c=0;
    printf("Please Enter that how many Numbers of Fibonacci Series you want: ");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
    return 0;
}
