#include<stdio.h>
int main(){
    int a=10, b=20, temp;
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping is %d,%d",a,b);
}