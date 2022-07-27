int main()
{
    int number=0;
    int i=0;
    int j=0;
    printf("Please Enter a Number to find its Next Prime Number: ");
    scanf("%d",&number);
    for(i=number+1; ;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            break;
    }
    printf("\nThe Prime Number after %d is: %d\n",number,i);
    return 0;
}
