int main()
{
    int i=0;
    int num1=0;
    int num2=0;
    int hcf=0;
    printf("Please Enter the First Number: ");
    scanf("%d",&num1);
    printf("Please Enter the Second Number: ");
    scanf("%d",&num2);
    for(i=1;i<=num1||i<=num2;i++)
    {
        if(num1%i==0&&num2%i==0)
        {
            hcf=i;
        }
    }
    printf("\nThe HCF of given Two Numbers is: %d\n",hcf);
    return 0;
}
