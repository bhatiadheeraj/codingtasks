#include<stdio.h>
int main()
{
    float m,cm,inch;

    printf("Enter value of Distance in meter \n");
    scanf("%f",&m);

    cm=m*1000;
    inch=cm/2.54;

    printf("Converted value in Centimeter = %f \n",cm);
    printf("Converted value in Inches = %f \n",inch);

}
