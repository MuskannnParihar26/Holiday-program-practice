#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Muskan\n");

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("Length of string = %d\n", count);

    printf("Muskan\n");

    return 0;
}