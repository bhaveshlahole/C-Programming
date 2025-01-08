#include<stdio.h>
int factorial (int x)
{
    int fact =1;
    for(int i=1;i<=x;i++)
    {
        fact = fact*i;
    }
    return fact;
}
int combination(int n,int r)
{
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int n=4;
int main()
{
    for(int k=0;k<=n;k++)
    {
        
        for(int q=0;q<=n+1-k;q++)
        {
            printf(" ");
            
        }
        
        for(int j=0;j<=k;j++)
        {
            int icj = combination(k,j);
            printf("%d  ",icj);
        }
        printf("\n");
    }
    return 0;
}