#include <stdio.h>

int main() {
    int a, b, lcm;

    printf("Muskan\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    lcm = (a > b) ? a : b;

    while(1) {
        if(lcm % a == 0 && lcm % b == 0) {
            printf("LCM = %d\n", lcm);
            break;
        }
        lcm++;
    }

    printf("Muskan\n");
    return 0;
}