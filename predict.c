#include<stdio.h>
int main()
{
    int n=4 ;
    for(int i =1;i<=n;i++)
    {

        for(int j=1;j<=6;j++)
        {
            if((i==1 || i==4)||(j==1 ||j==6))
            {
            printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}