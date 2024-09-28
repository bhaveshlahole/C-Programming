#include<stdio.h>
int main()
{
        int marks;
        printf("Enter the marks you scored\n");
        scanf("%d", & marks);
        if(marks > 90)
        {
            printf("Congruts you scored A Grade");
        }
        else if( marks > 80)
        {
            printf("Grade B \n");
        }
        else if (marks > 70)
        {
            printf("Grade C \n");
        }
        else if(marks > 60)
        {
            printf("Grade D");
        }
        else 
        {
            printf("Fail /n");
        }

    return 0;
}