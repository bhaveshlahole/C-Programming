#include<stdio.h>
int add(int x,int y)
{
    int add = x + y;
    return add;

}

int main()
{
    int a = 4;
    int b = 5;
     int sum = add(a,b);
    printf("%d",sum);
    return 0;
}