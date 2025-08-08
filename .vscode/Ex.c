#include<stdio.h>
#include<math.h>

int main()
{
int Num1, Num2, check, result;
printf("Enter number1 : ");
scanf("%d", &Num1);
printf("Enter number2 : ");
scanf("%d", &Num2);

printf("Calculator Menu: \n 1. +\n 2. -\n 3. *\n 4. /\n 5. %%\n");

printf("Choose Menu: ");
scanf("%d", &check);

switch(check){

    case 1:
        printf("Ans: Num1+Num2 = %d\n", Num1+Num2);
        break;
    case 2:
        printf("Ans: Num1-Num2 = %d\n", Num1-Num2);
        break;
    case 3:
        printf("Ans: Num1*Num2 = %d\n", Num1*Num2);
        break;
    case 4:
        printf("Ans: Num1/Num2 = %d\n", Num1/Num2);
        break;
    case 5:
        result = fmod((Num1,Num2));
        printf("Ans: Num1 %% Num2 = %.2f\n");
        break;
    default: 
}

return 0;
}

