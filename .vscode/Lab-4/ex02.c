#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    int i = 1;
    float average;

    while (i <= 10) 
    {
        printf("Print the Number: ");
        scanf("%d", &num);
        sum += num;
        i++;
    }

    average = sum / 10.0;

    printf("The total sum is: %d\n ", sum);
    printf("The average is: %.2f\n", average);

    return 0;
}