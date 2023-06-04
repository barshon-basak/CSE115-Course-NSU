#include <stdio.h>

int countSmallVowel(char str[]) {
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
        i++;
    }

    return count;
}

int main(void) {
    char str[200];
    scanf("%s",&str);
    int vowelCount = countSmallVowel(str);
    printf("Number of lowercase vowels: %d\n", vowelCount);

    return 0;
}
