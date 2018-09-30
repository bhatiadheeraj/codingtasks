#include <stdio.h>
#include <math.h>
int main ()
{
    float a,b,c,d,x1,x2;

    printf("Enter the coefficient of x^2 \n");
    scanf("%f",&a);
    printf("Enter the coefficient of x \n");
    scanf("%f",&b);
    printf("Enter the constant \n");
    scanf("%f",&c);

    d = (b*b)-4*a*c;

    if (d>0)
    {
        x1 = (-b + sqrt(d))/2*a;
        x2 = (-b - sqrt(d))/2*a;

        printf("One root = %f",x1);
        printf("Second root = %f",x2);

    }
    else
        printf("No real roots");

}
