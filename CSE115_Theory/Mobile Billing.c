#include <stdio.h>

int main() {
    int minutes;
    float bill = 0, final_bill ;

    printf("Enter the number of minutes talked: ");
    scanf("%d", &minutes);

    if (minutes <= 5) {
        bill = minutes * 0.45;
    }
    else if (minutes <= 35) {
        bill = 5 * 0.45 + (minutes - 5) * 0.60;
    }
    else if (minutes <= 95) {
        bill = 5 * 0.45 + 30 * 0.60 + (minutes - 35) * 0.85;
    }
    else {
        bill = 5 * 0.45 + 30 * 0.60 + 60 * 0.85 + (minutes - 95) * 1.00;
    }


final_bill= 1.18* bill;
    printf("Total bill: Tk. %.2f\n", final_bill);

    return 0;
}

