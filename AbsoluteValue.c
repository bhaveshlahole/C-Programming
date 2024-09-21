// #include<stdio.h>
// int main(){
//     int num;
//     printf("\nEnter the number for its absulute value:\n");
//     scanf("%d",& num);
//     if(num > 0){
//         printf("\nAbsolute value of  number is %d\n",num);
//     }
//     else if(num = (num + num)/-2){
//         printf("\nAbsulute valuse of number is %d/n",num);

//     }
//     else{
//         printf("\nWe are working on it please try another number\n");
//     }

//     return 0;
// }

#include<stdio.h>
int main(){
    int number;
    printf("Enter the number for finding Absolute Value:\n");
    scanf("%d",& number);
    if(number<0){
        number = number * (-1);
    }
   printf("The Absolute Value of number is %d",number);

    return 0;
}