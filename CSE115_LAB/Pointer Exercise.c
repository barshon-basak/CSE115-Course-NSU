#include <stdio.h>
#include <math.h>

void calculateArea(double height, double *area) {
    double pi = 3.14159;
    *area = (2.0 / 3.0) * height * height * height * pi;
}

int main() {
    double height, area;

    printf("Enter the height of the sphere: ");
    scanf("%lf", &height);

    calculateArea(height, &area);

    printf("The area of the sphere is: %lf\n", area);

    return 0;
}
