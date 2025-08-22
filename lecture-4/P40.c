#include <stdio.h>
int main() {
    int num = 0;
    printf("Multiplication table\n");
    while (num <= 12)
    {
        printf("%4d * %-2d = %-3d\n", 5, num, 5 * num);
        printf("%4d * %-2d = %-3d\n", 9, num, 9 * num);
        num++;
    }
        return 0;
}