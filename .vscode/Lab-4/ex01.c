#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    float average;

    for (int i = 1; i <= 10; i++)
    {
        printf("Print the Number: ");
        scanf("%d", &num);
        sum += num;
    }

    average = sum / 10.0;

    printf("The total sum is: %d\n ", sum);
    printf("The average is: %.2f\n", average);

    return 0;
}