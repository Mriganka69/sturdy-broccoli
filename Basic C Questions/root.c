#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, root1, root2;
    printf("Enter the coefficient of a , b and c:");
    scanf("%f, %f, %f", &a,&b,&c);

    d= (b*b) - (4*a*c);

    if(d>0){
        root1 = (-b + sqrt(d))/(2*a);
        root2 = (-b + sqrt(d))/(2*a);
        printf("The roots are: %d,%d ",root1,root2);
    }
    else if (d==0)
    {
         root1 = root2 = (-b /(2*a));
        printf("The roots are : %f",root1,root2);
    }
    else {
        root1 = (-b + sqrt(-d))/(2*a);
        root2 = (-b + sqrt(-d))/(2*a);
        printf("The roots are: %f,%f ",root1,root2);
    }
}