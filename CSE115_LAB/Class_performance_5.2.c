//Barshon Basak   ID: 2311625642

#include <stdio.h>

double convert(double kel);

int main(void)
{
    double kel;
    printf("Enter a number: \n");
    scanf("%lf",&kel);

    printf("%f",convert(kel));
    return 0;
}

double convert(double kel)
{
 return (kel - 273.15);
}
