#include<stdio.h>
    int countnumber(int n){
    int count = 0;
    if(n == 0){
        return 1;
    }
    while (n!=0)
    {
        count++;
        n= (n/10);
    }
    return count;
    }
    int main(){
        int n = 3348;
        printf("The number of digit is: %d",countnumber(n));
    }