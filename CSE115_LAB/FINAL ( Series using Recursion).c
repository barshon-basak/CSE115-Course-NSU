#include <stdio.h>
#include <math.h>
double miracle(int num, int sign);
int main(void)
{
int n,sign;
scanf("%d",&n);
if(n%2 == 1 ){
    sign=-1;
}
else sign= 1;
double ans;

ans= miracle(n,sign);
printf("%lf",ans);
    return 0;
}

double miracle(int num, int sign){
if (num==1){
    return sign*200;
}
   float term = sign * 200.0 / num;
    return term + miracle(num - 1, -sign);
}
