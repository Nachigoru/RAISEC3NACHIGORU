#include <stdio.h>
int main() {
    int vowels = 0;
    int notVowels = 0;
    int count = 0;
    char letters;

    printf("Enter 10 lowercase letters:\n");

    for (count= 0; count < 10; count++) {
        scanf(" %c", &letters);

    if (letters == 'a' || letters == 'e' || letters == 'i' || letters == 'o' || letters == 'u') {
        vowels++;
    } else {
        notVowels++;
    }
}

    printf("\nNumber of Vowels = %d\n", vowels);
    printf("\nNumber of not Vowels = %d\n", notVowels);

    return 0;
}