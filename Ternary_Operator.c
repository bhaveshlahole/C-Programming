#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value for n \n");
    scanf("%D",&n);

    n%2==0 ? printf("Entered number is even") : printf("Entered number is odd");

    return 0;
}