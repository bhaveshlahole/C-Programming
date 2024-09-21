#include<stdio.h>
int main()
{
    int num1 , num2, num3 ;
    printf("Enter the value for num1 \n");
    scanf("%d",& num1);

    printf("Enter the value for num2 \n");
    scanf("%d",& num2);
    printf("Enter the value for num3 \n");
    scanf("%d",& num3);

    if( num1 > num2)
    {
        if(num1 > num3)
        {
            printf("Entered number %d is greatest",num1);
        }
        else
        {
            printf("Entered number %d is greatest",num3);
        }
    }
    else
    {
        if(num2 > num1)
        {
            if(num2 > num3)
            {
                printf("Entered number %d is greatest",num2);
            }
            else
            {
                printf("Enterd number %d is greatest",num3);
            }
        }
    }

    return 0;
}