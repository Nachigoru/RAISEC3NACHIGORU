#include <stdio.h>
 int main() {
    int x = 1;
    int y = 0;
    int z = 0;




    printf("Initial Values:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n\n", z);




    switch (x % 2) {
    case 0:
    x = 2;
    y = 3;
    Break;


    case 1:
    x = 4;
    break;
   
    default:
    y = 3;
    x = z;
    break;
}  


    printf("Final values after the swtich statement:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);\


return 0;
}
