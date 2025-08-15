#include <stdio.h> 

int main()
{
    int num;
    
    do {
        printf("Print the Number: ");
        scanf("%d", &num);
    
        if (num == 0) {
        printf("Exiting the program... Bye\n");
        }
        else if (num % 2 == 0) {
        printf("%d is even.\n", num);
        }
        else {
        printf("%d is odd.\n", num);
        }
    
    } while  (num != 0);
return 0;
}
