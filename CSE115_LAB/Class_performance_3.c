//Name : Barshon Basak   ID : 2311625642

#include<stdio.h>
#include<math.h>

int main (void)
{
double a , b, c, C;

printf("Enter side1: \n");
scanf("%lf",&a);

printf("Enter side2: \n");
scanf("%lf",&b);

printf("Enter angle in degree: \n");
scanf("%lf",&C);

c=sqrt(a*a+ b*b - 2*a*b*cos(C*3.1416/180));
printf("The third side is %.2f",c);

return 0;
}
