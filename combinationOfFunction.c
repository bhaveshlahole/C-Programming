#include<stdio.h>
int factorial(int a)
{
    int fact = 1;
    for(int i = 1;i<=a; i++)
    {
        fact = fact*i;

    }
    return fact;
}
int main()
{
    int  n = 4;
    int r = 2;
    int ncr = (n -r);
    int ncom = factorial(n);
    int rcom = factorial(r);
    int ncrcom = factorial(n-r);
    int combination = factorial(n)/(factorial(r)*factorial(n-r));
    printf(" combination is %d",combination);


    return 0;
}