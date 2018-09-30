#include <stdio.h>
int main ()
{
    int mark;
    printf("Enter marks in Percentage of a student \n");
    scanf("%d",&mark);
    if (mark>=60)
    {
        printf("PASS with I division \n");
    }
    else if (mark <= 60 && mark >= 50)
    {
       printf("PASS with II division \n");
    }
    else if (mark <= 50 && mark >= 40)
    {
       printf("PASS with III division \n");
    }
    else
        printf("FAIL \n");
}
