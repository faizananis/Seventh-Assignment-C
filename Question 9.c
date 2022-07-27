int main()
{
    int number=0;
    int num=0;
    int i=0;
    int j=0;
    int digit=1;
    int sum=0;
    printf("Please Enter a Number to check it is Armstrong Number or not: ");
    scanf("%d",&number);
    num=number;
    for(i=0;num!=0;i++)
    {
        num=num/10;
    }
    num=number;
    while(num!=0)
    {
        digit=1;
        for(j=1;j<=i;j++)
        {
            digit=digit*(num%10);
        }
        sum=sum+digit;
        num=num/10;
    }
    if(sum==number)
    {
        printf("\nThe Given Number which is %d is an Armstrong Number.\n",number);
    }
    else
    {
        printf("\nThe Given Number which is %d is not an Armstrong Number.\n",number);
    }
    return 0;
}
