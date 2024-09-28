#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter value for X,Y coordinate \n");
    scanf("%d  %d", &x , &y);
    if( x == 0 && y == 0)
    {
        printf("The point ia at origin");

    }
       else if( (x == 0) )
        {
            printf("The point is y axis");
        }
      else if (y == 0)
        {
            printf("The point is on x axis");
        }
        else{
            printf("The point is not on x and y axis and origin");
        }
    
   

    return 0;
}