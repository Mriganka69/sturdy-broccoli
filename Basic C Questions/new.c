// check if negative positive or 0
#include <stdio.h>
int main() {
   int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("The number is negative");
    }
    else if (num == 0)
    {
        printf("The number is 0");
    }
    else{
        printf("The number is positive");
    }
}
