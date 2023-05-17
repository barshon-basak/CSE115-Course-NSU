//Name & Student Id : Barshon Basak , 2311625642

#include<stdio.h>

int main(void){

double celsius, Fahrenheit;

printf("Enter temperature in Fahrenheit: ");
scanf("%lf", &Fahrenheit);

celsius = (Fahrenheit-32)*5/9;

printf("Temperature in Celsius is %f",celsius);

return 0;

}
