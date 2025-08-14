
#include <stdio.h>
#include <stdlib.h>

int main(){
int num1,num2,product;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    product = num1 * num2;

    printf(" Multiplication of given numbers %d and %d is:%d \n",num1,num2,product);

    getch();

    return 0;
}
