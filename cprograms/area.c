#include <stdio.h>
#define pi 3.14159
int main() {
    float s,rb,rl,rad,asq,ar,acir;
    printf("Enter side of square \n");
    scanf("%f",&s);
    printf("Enter Rectangle breadth and lenght \n");
    scanf("%f%f",&rb,&rl);
    printf("Enter radius of circle \n");
    scanf("%f",&rad);
   
    asq = s*s;
    ar = rb*rl;
    acir = pi*rad*rad;
   
    printf("Area of Square = %f \n",asq);
    printf("Area of Rectangle = %f \n",ar);
    printf("Area of Circle = %f\n",acir);
}
