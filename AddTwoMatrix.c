#include<stdio.h>
int main()
{
    int a[2][2]={{2,3},{4,5}};
    int b[2][2]={{4,6},{7,8}};
    int c[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        printf("\n");
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}