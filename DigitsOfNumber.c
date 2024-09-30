#include<stdio.h>
int main()
{
    int i = 1256;
    int count = 0;
    while(i> 0 )
    {
      i = i/10;
      count++;
      printf("%d ",count );    
    
    }


    return 0;
}