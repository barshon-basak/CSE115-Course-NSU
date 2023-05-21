#include <stdio.h>
#include <math.h>

int main(void)
{
    float answer, ans1, x, ans2, ans3;

    printf("Enter the value of x : \n");
    scanf("%f",&x);

    int u = 1;
    int v = 6;

    ans1 = (sin(u+(v/80))*(((11+2*x)/2)-x));
    ans2 = ((sin(u))*(cos(v/80)));
    ans3 = ((cos(u))*(sin(v/80)));

    answer = ((ans1)*(1/(ans2+ans3)));

    printf("The answer is %.2f",answer);

    return 0;
}
