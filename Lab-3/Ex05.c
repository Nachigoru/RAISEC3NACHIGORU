#include <stdio.h>

int main(){
    float height, radius, volume;
    const float PI = 3.14159; 
    
    printf("Enter the cone height: ");
    scanf("%f", &height);

    printf("Enter the cone's base radius: ");
    scanf("%f", &radius);

    volume = (1.0 / 3.0) * PI * radius * radius * height;

    printf("Cone volume = %.1f\n", volume);
    if (volume > 260.0) {
        printf("This cone is perfect for Supun project");
    } else {
        printf("This cone is not fit for this project");
    }
    return 0;
}