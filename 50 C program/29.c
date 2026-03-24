#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Muskan\n");
    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }

    if(n == 1)
        printf("Not Prime\n");
    else if(flag == 0)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    printf("Muskan\n");
    return 0;
}