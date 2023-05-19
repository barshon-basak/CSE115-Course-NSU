
/* Name : Barshon Basak
Section 5
SET E
Ques num : 1
*/
#include <stdio.h>

int power3 (int x);

int main(void)
{
    int u = 1;
    int v = 6;
    double term1=0;
    double term2=0;

//solving for u

    for (int i=1; i <=u ; i++){
        term1 = term1 + ((double)i/power3(i));
    }

   printf("The desired ans for u is %f\n",term1);

//Solving for v

    for (int i=1; i <=v ; i++){
        term2 = term2 + ((double)i/power3(i));
    }

   printf("The desired ans for v is %f",term2);

    return 0;

}

int power3 (int x){

    return x*x*x;
}
