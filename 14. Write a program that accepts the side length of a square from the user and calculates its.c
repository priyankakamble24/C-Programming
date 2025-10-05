// Area Of Square

#include <stdio.h>
#include <conio.h>

int main()
{
    int Side , Area;
    printf("\n Enter The Side Of Square : ");
    scanf("%d",&Side);

    Area = Side * Side;
    printf("\n Area Of The Square = %.2d" , Area);

    getch();
    return 0;

}
