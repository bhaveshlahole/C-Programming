
// increment decrement
/*
#include<stdio.h>
int main()
{
    int x = 4, y , z;
    y = ++x;
    z = x++;
    printf("%d %d %d ",x,y,z);
    return 0;
}
*/

// predict the oputput

// #include<stdio.h>
// int main()
// {
//     int x =4,y=3,z;
//     z = x-- -y;
//     printf(" \n %d %d %d",x,y,z);
//     return 0;
// }


                               // predict the output

// #include<stdio.h>
// int main()

// {
//     int x = 4, y=0, z;
//     while(x>=0)
//     {
//         x--;
//         y++;
//         if(x == y)
//         {
//             continue;
//         }
//         else
//         {
//             printf("\n %d %d %d",x,y);
//         }


//     }

//     return 0;
// }

#include<stdio.h>
int main()
{
    int x =4,y=0;
    while(x>=0)
    {
        if(x == y)
        break;
        else
         printf("\n %d %d",x,y);
         x--;
         y++;
    }

    return 0;
}