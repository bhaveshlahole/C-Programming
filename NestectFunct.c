#include<stdio.h>

void england()
{
    
    printf("I am in England \n");
    return;
}
void austrila()
{
    printf("I am in Austrila \n");
    england();
    return;

}

void india()
{
    printf("I am in India \n");
    austrila();
    return;
}



int main()
{
    india();
    return 0;
}