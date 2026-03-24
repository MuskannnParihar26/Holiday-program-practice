#include <stdio.h>

int main() {
    int num;
    printf("Muskan\n"); 

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is a Even number \n",num);
    else
        printf("%d is a odd number \n",num);

    printf("Muskan\n"); 
    
     return 0;
}5