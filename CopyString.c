                 // Shallow Copy
#include<stdio.h>
int main()
{
    char s1[] = "physics Wallah";
    char* s2 = s1;
    s1[0] = 'M';
    printf("%s",s2);
    return 0;
}