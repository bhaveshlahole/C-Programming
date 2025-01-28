#include<stdio.h>
int main()
{

    
    int n;
    
    printf("Enter the count for rows and column\n");
    scanf("%d",&n);
    printf("Enter values for array \n");
    int arry[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        scanf("%d",&arry[i][j]);
        }
        printf("\n");
    }
   
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n; j++)
        {
           int temp = arry[i][j];
           arry [i][j] = arry[j][i];
           arry[j][i] = temp;
        }
        printf("\n");
    }
    for(int  i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arry[i][j]);
        }
           printf("\n");
            
    }
    return 0;
}