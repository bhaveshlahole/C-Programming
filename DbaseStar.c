#include<stdio.h>
int main()
{
    int num;
    printf("Enter rows value for stars");
    scanf("%d",& num);
    for(int i = 1; i<=num; i++)
    {
        for(int j =1; j<= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}