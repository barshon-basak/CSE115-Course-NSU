//Barshon Basak   ID: 2311625642

#include <stdio.h>
#include <math.h>

int power(int x);

int main(void)
{
    int num,ans;
    printf("Enter a number: \n");
    scanf("%d",&num);

    printf("%d",power(num));
    return 0;
}

int power(int x)
{ int ans;
 ans= pow(x,5);
 return ans;
}
