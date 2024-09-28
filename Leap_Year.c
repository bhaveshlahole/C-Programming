#include<stdio.h>
int main(){
    int year;
    printf("\nEnter the year for finding it is leap year or not:\n");
    scanf("%d",& year);
    if(year %4 == 0){
        printf("Enterd year is leap year ");
    }
    else{
        printf("Enterd year is not leap year");
    }

    return 0;
}