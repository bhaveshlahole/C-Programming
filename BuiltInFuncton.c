#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20] = "Global variable";
    char s2[20];
    strcpy(s2,s1);
    printf("%s \n",s2);
    s2[0]='N';
    printf("%s",s2);
    return 0;
}