#include <stdio.h>

int main() {
    int int1,int2;
    printf("Input values for number1 and number2");
    scanf("%d %d",&int1,&int2);
    if(int1==int2)
    printf("Number 1 and number 2 are equal");
    else 
    printf("Number 1 and number 2 are not equal");

    return 0;
}