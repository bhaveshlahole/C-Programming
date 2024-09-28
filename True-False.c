#include<stdio.h>
int main(){

    int n;
    printf("Enter the the number you want: ");
    scanf("%d",& n);
    if(n %2 == 0)
    {
        printf("Enterd number is  Even Number");
    }
    else
    {
        printf("Enterd number  is Odd Number");
    }

    return 0;
}