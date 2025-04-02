//print 1st and last digit of a number
#include<stdio.h>
int main(){
    int n, last, first;
    printf("Enter the number");
    scanf("%d",&n);

    last = n%10;
    
    first= n;
    while(first>10){
        first = first/10;
    }

    printf("Last number is: %d ",last);
    printf("first number is: %d ",first);
}