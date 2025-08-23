#include <stdio.h>

int main() {
    int i;
    int n;
    int j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int numbers[n];
    int countedNumbers[n];

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++){
        scanf("%d", &numbers[i]);
        countedNumbers[i] = 0;
    }

    for (i = 0; i < n; i++) {
        if(countedNumbers[i] == 0) {
            int count = 1;
             for (j = i + 1; j < n; j++) {
                if (numbers[i] == numbers[j]) {
                    count++;
                    countedNumbers[j] = 1;
                }
             }
            printf("Element %d occurs %d times.\n", numbers[i], count);
        }
    }


    return 0;
}