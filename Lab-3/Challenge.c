#include <stdio.h>

char getLetterGrade(int score) {
    if (score >= 90)
    return 'A';
    else if (score >= 80)
    return 'B';
    else if (score >= 70)
    return 'C';
    else if (score >= 60)
    return 'D';
    else
    return 'F';
}

float getNumericGrade(char grade) {
    switch (grade) {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        default: return 0.0;
    }
}
int main() {
    int calcScore, physicsScore, compScore;
    char calcGrade, physicsGrade, compGrade;
    float calcNum, physicsNum, compNum, gpa;

printf("Calculus Score: ");
scanf("%d", &calcScore);
printf("Physics Score: ");
scanf("%d", &physicsScore);
printf("Compro Score: ");
scanf("%d", &compScore);


calcGrade = getLetterGrade(calcScore);
physicsGrade = getLetterGrade(physicsScore);
compGrade = getLetterGrade(compScore);

calcNum = getNumericGrade(calcGrade);
physicsNum = getNumericGrade(physicsGrade);
compNum = getNumericGrade(compGrade);

gpa = (calcNum + physicsNum + compNum) / 3.0;

printf("\n%-10s %-7s %-7s %-7s\n","Subject", "Score", "Grade", "Grade");
printf("--------------------------------------\n");
printf("%-10s %-7d %-7c %-7.1f\n", "Cal", calcScore, calcGrade, calcNum);
printf("%-10s %-7d %-7c %-7.1f\n", "Physics", physicsScore, physicsGrade, physicsNum);
printf("%-10s %-7d %-7c %-7.1f\n", "Compro", compScore, compGrade, compNum);
printf("GPA: %.1f\n", gpa);

return 0;
}
