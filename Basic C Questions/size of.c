//c program to find the size of integer, float, double and character
#include <stdio.h>

int main() {
    int a;
    char c1;
    double d;
    float b;
    printf("enter the int");
    scanf("%d",&a);
    
    printf("enter the FLOAT");
    getchar();
    scanf("%f",&c1);
   
    printf("enter the char");
    scanf("%c",&d);

    printf("enter the double");
    scanf("%lf",&b);
    
    printf("%d \n", sizeof(a));
    printf("%d \n", sizeof(c1));
    printf("%d \n", sizeof(d));
    printf("%d \n", sizeof(b));
    return 0;
}
