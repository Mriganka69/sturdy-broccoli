//WAP to count number of digit in a integer
#include <stdio.h>
#include <math.h>

int main() {
    int n, last, first, temp, count = 0, num, power, swap;
    
    printf("Enter the number: ");
    scanf("%d", &n);   
    first = n;
    while (first >= 0) {  
        first /= 10;
        count++;
    }
    printf("The number is: %d",count);
}