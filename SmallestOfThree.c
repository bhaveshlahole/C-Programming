#include<stdio.h>
int main()
{
    int age1 , age2 , age3;
    printf("Enter the vale for age1 \n");
    scanf("%d",&age1);
    printf("Enter the vale for age2 \n");
    scanf("%d",&age2);
    printf("Enter the vale for age3 \n");
    scanf("%d",&age3);
    if((age1 < age2) && (age1 < age3))
    {
        printf("%d is youngest \n",age1);
    }
    else if((age2 < age1) && (age2 < age3))
    {
        printf("%d is youngest \n",age2);
    }
    else
    {
        printf("%d is youngest \n",age3);
    }
    return 0; 
}