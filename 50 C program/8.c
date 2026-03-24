#include <stdio.h>
#include <math.h>

int main() {
    int n, original, sum = 0, digit, count = 0;
    printf("Muskan\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    int temp = n;
    while(temp != 0) { temp /= 10; count++; }
    temp = n;
    while(temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    if(sum == original)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");
    printf("Muskan\n");
    return 0;
}