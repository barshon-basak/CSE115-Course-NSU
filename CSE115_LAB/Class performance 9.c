//Barshon Basak   ID : 2311625642

#include <stdio.h>

int main(void)
{
    int n;
    double sum=0.00;

    printf("Enter the value of n: \n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum += 1.0/(i*i);

    }

    printf("The summation is %.4f",sum);

    return 0;
}
