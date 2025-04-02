//wap to read age of a user and check he is eligible for voting or not
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter 1st:");
    scanf("%d",&a);
    printf("Enter 2nd:");
    scanf("%d",&b);
    if (a>b)
    {
       printf("a greater");
    }
    else if (a < b)
    {
        printf("b greater");
    }
    
    else{
        printf("equal");
    }
    
}