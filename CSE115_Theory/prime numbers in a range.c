#include <stdio.h>

int main() {

int min, i,j, isPrime=1,max ;

printf ("enter the lower limit and max limit:\n");
scanf("%d%d",&min,&max);

for(i=max; i>=min;i--)
{
    for(j=2; j<i/2;j++)
    {
if(i==0){
    isPrime=0;
    break ;
    }
}
if(isPrime!=0)
{printf ("%d",i);}
}
    return 0;
    }
