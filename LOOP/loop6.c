//palindrome or not
#include <stdio.h>

int main() {
    int n, original, rev, ans = 0;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    original = n;  

    while (n != 0) {
        rev = n % 10;
        ans = ans * 10 + rev;
        n = n / 10;
    }

    if (original == ans)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);
    
    return 0;
}
