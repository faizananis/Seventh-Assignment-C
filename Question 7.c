int main()
{
    int num1=0;
    int num2=0;
    int i=0;
    int j=0;
    printf("Please Enter the First Number: ");
    scanf("%d",&num1);
    printf("Please Enter the Second Number: ");
    scanf("%d",&num2);
    printf("\n");
    for(i=num1+1;i<num2;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
