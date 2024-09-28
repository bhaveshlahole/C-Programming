#include<stdio.h>
int main(){
    int number;
    printf("Enter a numbere for finding it is three digit or not \n");
    scanf("%d",& number);
    if(number > 99 && number < 1000){
        printf("Enterd number is %d is three digit number\n",number);
    } 
    else if (number > 9 && number < 100){
        printf("Enterd number %d is two digit number\n",number);
    }
    else if(number > 0 && number < 10){
        printf("Enterd number is %d is singile digit number",number);

    }
    else{
        printf("Enterd number is four digit number");
    }
    
    return 0;
}