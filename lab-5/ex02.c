#include <stdio.h> 

int main() {
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int reverse[9];
    int size = 9;
    int i;

    for (i = 0; i < 9; i++) {
            reverse[i] = original[size - 1 - i];
    }

    printf("Reversed Array: ");
    for (i = 0; i < size; i++)
        printf("%d, ", reverse[i]);
    return 0;
}