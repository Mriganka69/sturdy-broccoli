#include <stdio.h>
#include <math.h>

int main() {
    int n, last, first, temp, count = 0, num, power, swap;
    
    printf("Enter the number: ");
    scanf("%d", &n);   
    num = n;  
    last = num % 10; 
    first = num;
    while (first >= 10) {  
        first /= 10;
        count++;
    }
    power = pow(10, count);   
    temp = (n/10)*10+first;  
    swap = (last * power) + (temp % power);
    printf("Swapped number: %d\n", swap);    
}
