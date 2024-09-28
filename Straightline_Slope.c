#include<stdio.h>
int main()
{
    int x1, y1, x2, y2,x3,y3 ;
    printf("Enter the value for point x1 \n");
    scanf("%d",&x1);
    printf("Enter the value for point y1 \n");
    scanf("%d",&y1);
    printf("Enter the value for point x2 \n");
    scanf("%d",&x2);
    printf("Enter the value for point y2 \n");
    scanf("%d",&y2);
    printf("Enter the value for point x3 \n");
    scanf("%d",&x3);
    printf("Enter the value for point y3 \n");
    scanf("%d",y3);
    double m1 = (y3 - y2)/(x3 -x2);
    double m2 = (y2 - y1)/(x2 - x1);
    if (m1 = m2)
    {
        printf("The points are in straight line");
    }
    else
    {
        printf("The slopes are not in straight line");
    }




    return 0;
}