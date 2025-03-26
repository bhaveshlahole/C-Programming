#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct date{
        int day;
        int month;
        int year;
        
    }date;
    date a,b,c;

    // a 5/12/2004
    // b 25/1/2025
     a.day = 5;
     a.month = 12;
     a.year = 2004;
                                
    b.day = 25;
    b.month = 1;
    b.year = 2025;

    bool flag = true;
    if(a.day!= b.day) flag = false;
    if(a.month!= b.month) flag = false;
    if(a.year!= b.year) flag = false;

    if(flag == true) printf("The date are equal");
    else printf("The dates are different");

    return 0;
}   