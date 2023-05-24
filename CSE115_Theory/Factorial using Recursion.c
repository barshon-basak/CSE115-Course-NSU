#include<stdio.h>

int fac(int n)
{
    if (n == 0)
        return 1;
    else
        return n*fac(n-1);
}
int main(){
 int number = 6;
   int result = fac(number);
    printf("fac(%d) = %d\n", number, result);
return 0;
}
