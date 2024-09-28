#include<stdio.h>
int main(){
    float cp , sp , p , l;
    p = sp - cp;
    
    printf("Enter the cost price of product:\n");
    scanf("%f", &cp);
    printf("Enter the selling price of product:\n");
    scanf("%f", &sp);
    if(sp > cp  ){
        printf("The shopkeeper has made profit\n");
    }
    else if (sp < cp){
        printf("The shopkeeper has has made a loss\n");
    }
    if((sp - cp)> 0){
        printf("shopkeeper has made profit %f",p);
    }
    else if((sp - cp) > 0){
        printf("The shopkeeper has made loss %f",p);
    }
    
    return 0;
}