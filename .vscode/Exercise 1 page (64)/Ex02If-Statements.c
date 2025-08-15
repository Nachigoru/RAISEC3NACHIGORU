#include <stdio.h>
 int main() {
    int x = 1;
    int y = 0;
    int z = 0;




    printf("Initial Values:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n\n", z);


    if (x % 2 == 0) {
    x = 2;
    y = 3;
    } else if (x % 2 == 1) {
    x = 4;
    } else {
    y = 3;
    x = z;
}


    printf("Final values after the switch statement:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);


return 0;    
}