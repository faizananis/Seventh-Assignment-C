int main()
{
    int n=0;
    int i=0;
    int a=-1;
    int b=1;
    int c=0;
    printf("Please Enter which No. of term in Fabonacci Series you want: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("\nThe Given term Number %d of the Fabonacci Series is: %d\n",n,c);
    return 0;
}
