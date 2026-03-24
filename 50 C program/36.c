#include <stdio.h>

int main() {
    int n,temp,rev=0,r;
    printf("Muskan\n");

    printf("Enter number: ");
    scanf("%d",&n);

    temp=n;

    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }

    if(temp==rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    printf("Muskan\n");
    return 0;
}