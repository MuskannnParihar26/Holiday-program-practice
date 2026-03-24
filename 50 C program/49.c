#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Muskan\n");

    printf("Enter string: ");
    scanf("%s",str);

    strrev(str);

    printf("Reverse = %s\n",str);

    printf("Muskan\n");
    return 0;
}