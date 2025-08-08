#include<stdio.h>

int main(){
    int num1,num2;

    printf("Enter a Number :");
    scanf("%d", &num1);
    printf("Enter a Number :");
    scanf("%d,", &num2);


    if(num1 == num2){
    printf("Match\n");

    }else{
    printf("Does not match. Try again");
    }


return 0;
}    