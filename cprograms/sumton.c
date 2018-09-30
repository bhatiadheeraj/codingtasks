#include <stdio.h>
int main()
{
 int a,n;
 int count=1;
 int sum=0;
 printf("Enter no of times You will Enter the number \n");
 scanf("%d",&n);
 for (count=1 ; count <= n ; count++)
 {
     printf("Enter the Number \n");
     scanf("%d",&a);
     sum=sum+a;
 }
 printf("Sum = %d",sum);
}
