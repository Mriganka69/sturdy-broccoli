#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 6 == 0 && num % 4 == 0)
        printf("The number is divisible by 6 and 4\n");
    else
        printf("The number is not divisible\n");
    return 0;
}
