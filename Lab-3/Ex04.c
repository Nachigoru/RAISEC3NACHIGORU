#include <stdio.h>

int main() {

    char name[50];
    float calculus, physics, programming, average;
    char grade;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your calculus score: ");
    scanf("%f", &calculus);

    printf("Enter your physics score: ");
    scanf("%f", &physics);

    printf("Enter your science score: ");
    scanf("%f", &programming);

    average = (calculus + physics + programming) / 3;

    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("%s, your average is %.2f. You got grade %c.\n", name, average, grade);

    return 0;
}
