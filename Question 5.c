int main()
{
    int num1=0;
    int num2=0;
    int i=0;
    int check=0;
    printf("Please Enter the First Number: ");
    scanf("%d",&num1);
    printf("Please Enter the Second Number: ");
    scanf("%d",&num2);
    for(i=1;i<=num1||i<=num2;i++)
    {
        if(num1%i==0&&num2%i==0)
        {
            check++;
        }
    }
    if(check==1)
    {
        printf("\nYour Given Both Numbers which are %d and %d are Co-Prime Numbers.\n",num1,num2);
    }
    else
    {
        printf("\nYour Given Both Numbers which are %d and %d are not Co-Prime Numbers.\n",num1,num2);
    }
    return 0;
}
