#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Muskan\n");  
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }

    if(n == 1)
        printf("%d is Not Prime number\n",n);
    else if(flag == 0)
        printf("%d is a Prime number\n",n);
    else
        printf("%d is Not Prime number\n",n);

    printf("Muskan\n"); 
    return 0;
}