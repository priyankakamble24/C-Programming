//SquareRoot of the Number

#include <stdio.h>
#include <conio.h>

int main()
{

    int No = 0, SquareRoot;

    printf("\n Enter The Number : ");
    scanf("%d",&No);

    SquareRoot = sqrt(No);

    printf("\n Calculate the square root of the number = %d",SquareRoot);

    getch();
    return 0;

}
