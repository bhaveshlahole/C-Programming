#include<stdio.h>
int main()
{
    int r,c;
    int sum = 0;
    printf("Enter values for Row and COlumn \n");
    scanf("%d %d",&r,&c);
    int arry[r][c];
    printf("Enter Array Elements\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arry[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arry[i][j]);
        
        }
        printf("\n");
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum = sum+arry[i][j];
        }
    }
    printf("Sum of arry elements is %d ",sum);

    
    return 0;
}