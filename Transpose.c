#include<stdio.h>
int main()
{

    
    int r,c;
    
    printf("Enter the count for rows\n");
    scanf("%d",&r);
    printf("Enter the count for colmns \n");
    scanf("%d",&c);
    printf("Enter values for array \n");
    int arry[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
        scanf("%d",&arry[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r; j++)
        {
            printf("%d ",arry[j][i]);
        }
        printf("\n");
    }
    return 0;
}