
#include <stdio.h>

int main() {
    int n, i, max_weight = 0, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int ships[n];

    printf("Enter the weight of each ship (in kg):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &ships[i]);

        if (ships[i] > max_weight) {
            max_weight = ships[i];
             } else if (ships[i] == max_weight);
    }

    printf("The heaviest ship weighs %d kg\n", max_weight);


    return 0;
}
