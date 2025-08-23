#include <stdio.h>
int main() {
    int numbers[8];
    int smallest;
    int largest;

    for (int i = 0; i < 8; i++) {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    smallest = largest = numbers[0];

    for (int i = 0; i < 8; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    printf("Smallest Number: %d\n", smallest);
    printf("Largest Number: %d\n", largest);

    return 0;
}