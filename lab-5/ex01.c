#include <stdio.h>

int main() {
    int values[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter the values %d here: ", i+1);
        scanf("%d", &values[i]);
    }
        printf("The values in the array are: ");
    for (int i = 0; i < 10; i++)
        printf("%d, ", values[i]);

    return 0;
}