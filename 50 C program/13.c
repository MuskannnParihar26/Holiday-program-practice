#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area;
    printf("Muskan\n");
    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("Area of Circle = %.2f\n", area);
    printf("Muskan\n");
    return 0;
}