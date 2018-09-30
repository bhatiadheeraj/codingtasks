#include<stdio.h>
int main()
{
    float a,b,mul,sub,div;
    printf("Enter value of a and b \n");
    scanf("%f%f",&a,&b);

    sub=a-b;
    mul=a*b;
    div=a/b;

    printf("Multiplication of %f and %f = %f \n",a,b,mul);
    printf("Division of %f and %f = %f \n",a,b,div);
    printf("Subtraction of %f and %f = %f \n",a,b,sub);

}

