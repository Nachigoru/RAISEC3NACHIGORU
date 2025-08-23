#include <stdio.h>

int main() {
    int numbers[10];
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < 10; i++ ) {
        printf("Enter the value %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 10; i++ ) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
    } else {
        oddCount++;
    }
}

    printf("Even Numbers: %d\n", evenCount);
    printf("Odd Numbers: %d\n", oddCount);


    return 0;
}