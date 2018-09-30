#include <stdio.h>
#include <math.h>

 int main ()
 {
    float a,b,c,s,area,h;
    printf("Enter three sides of the triangle \n");
    scanf("%f%f%f",&a,&b,&c);

    s = (a+b+c)/3;
    h = s*(s-a)*(s-b)*(s-c);
    area = sqrt(h);

    printf("The area of triangle = %f",area);
 }
