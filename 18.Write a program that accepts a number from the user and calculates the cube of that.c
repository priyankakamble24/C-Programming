// Calculate the Cube

#include <stdio.h>
#include <conio.h>

int main()
{
    int No = 0 , Cube;

    printf("\n Enter The Number : ");
    scanf("%d",&No);

    Cube = No * No * No;

    printf("\n \n Calculate Cube Of the Given Number = (%d * %d * %d) = %d ", No, No ,No , Cube);

    getch();
    return 0;


}
