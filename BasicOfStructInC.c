#include<stdio.h>
int main()
{
    struct laptop{
        int price;
        float weight;
        char series;
    };
    struct laptop HP;
    HP.price = 45000;
    HP.weight = 2.5;
    HP.series = 'U';
    printf("%d %f %c",HP.price,HP.weight,HP.series);
    return 0;
}