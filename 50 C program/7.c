#include <stdio.h>

int main() {
    int n, original, reverse = 0, digit;
    printf("Muskan\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while(n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    if(original == reverse)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    printf("Muskan\n");
    return 0;
}