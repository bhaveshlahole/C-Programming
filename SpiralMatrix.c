#include<stdio.h>

int main()
{
    int m;
    printf("Enter number of rows for a matrix \n");
    scanf("%d", &m);

    int n;
    printf("Enter number of columns for a matrix \n");
    scanf("%d", &n);

    int a[m][n];
    
    printf("Enter elements of the matrix \n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Spiral printing
    printf("\n");
    int minr = 0;
    int maxr = m - 1;
    int minc = 0;
    int maxc = n - 1;
    int tne = m * n; // total number of elements
    int count = 0;

    while(count < tne)
    {
        // Print the minimum row
        for(int j = minc; j <= maxc && count < tne; j++)
        {
            printf("%d ", a[minr][j]);
            count++;
        }
        minr++;

        // Print the maximum column
        for(int i = minr; i <= maxr && count < tne; i++)
        {
            printf("%d ", a[i][maxc]);
            count++;
        }
        maxc--;

        // Print the maximum row
        for(int j = maxc; j >= minc && count < tne; j--)
        {
            printf("%d ", a[maxr][j]);
            count++;
        }
        maxr--;

        // Print the minimum column
        for(int i = maxr; i >= minr && count < tne; i--)
        {
            printf("%d ", a[i][minc]);
            count++;
        }
        minc++;
    }

    return 0;
}