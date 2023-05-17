// Barshon Basak    ID : 2311625642

#include <stdio.h>

int main(void)
{
    int age;
    char marriage, gender;

    printf("Enter marital status:\n");
    printf("Enter M for married and U for unmarried ");
    scanf("%c",&marriage);

    printf("Enter age: \n");
    scanf(" %d",&age);

    printf("Enter gender \n");
    printf("Enter M for Male and F for Female ");
    scanf(" %c",&gender);

    if (marriage=='M'){
        printf("Insured");
    }
    else if((marriage=='U' || marriage=='u') && (gender=='M' || gender== 'm') && age>30){
        printf("Insured");
    }
    else if((marriage=='U' || marriage=='u') && (gender=='F' || gender== 'f') && age>25){
        printf("Insured");
    }
    else{

        printf("Not Insured");
    }
    return 0;
}
