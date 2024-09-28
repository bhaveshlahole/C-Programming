#include<stdio.h>
int main()
{
    int s1 , s2 , s3;
    printf("Enter value for s1 \n");
    scanf("%d",&s1);
    printf("Enter value for s2 \n");
    scanf("%d",&s2);
    printf("Enter value for s3 \n");
    scanf("%d",&s3);
    if((s1 + s2 )> s3 && (s2 + s3) > s1 && (s1 + s3) > s2)
    {
        printf("Enter input is use for making tringle");
    }
    else
    {
        printf("Enterd input is not making triangle");
    }
    return 0;
}