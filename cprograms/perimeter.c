#include <stdio.h>
#define pi 3.14159
int main() {
    float s,rl,rb,rad,psq,pr,pcir;
    printf("Enter Side of Square \n");
    scanf("%f",&s);
    printf("Enter Length and Breadth of rectangle \n");
    scanf("%f%f",&rl,&rb);
    printf("Enter Radius of Circle \n");
    scanf("%f",&rad);
    psq = 4*s;
    pr = 2*(rl+rb);
    pcir = 2*pi*rad;
    printf("The Perimeter of Square = %f \n",psq);
    printf("The Perimeter of Rectangle = %f \n",pr);
    printf("The Perimeter of Circle = %f\n",pcir);
}
