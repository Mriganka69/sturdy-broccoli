//WAP c program to print all natural no from 1 to n using while loop
#include<stdio.h>
int main(){
    int i=1;
    int n;
    printf("Enter the numbers");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d",i);
        i++;
    }
      
}