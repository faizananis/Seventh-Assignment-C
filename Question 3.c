int main()
{
    int n=0;
    int i=0;
    int a=-1;
    int b=1;
    int c=0;
    printf("Please Enter a Number to check it is a part of Fibonacci Series or not: ");
    scanf("%d",&n);
    do
    {
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    while(c<n);
    if(c==n)
    {
        printf("\nThe Given Number which is %d is a part of term No.%d in a Fibonacci Series.\n",n,i);
    }
    else
    {
        printf("\nThe Given Number %d is not a part of Fibonacci Series.\n",n);
    }
    return 0;
}
