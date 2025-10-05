//Square Of Number

#include <stdio.h>
#include <conio.h>

int main()
{
    int No = 0 , Square;

    printf("\n Enter The Number : ");
    scanf("%d",&No);

    Square = No * No;


    printf("Square Of Number = (%d * %d) = %d",No , No , Square);

    getch();
    return 0;

}
