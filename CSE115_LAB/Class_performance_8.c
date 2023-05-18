//Barshon Basak       ID:2311625642

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int x = 0;
    if(num==0)
    {
    printf("Total digits : 1");
    }
    else{
            while (num > 0)
            {
            num /= 10;
             x++;
            }
    printf("Total digits : %d", x);
    }
    return 0;
}
