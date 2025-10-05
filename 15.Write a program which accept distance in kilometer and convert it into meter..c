//Distance in Kilometer convert into Meter

#include <stdio.h>
#include <conio.h>

int main()
{

    float km , m;

    printf("\n Enter The Distance In Kilometer : ");
    scanf("%f",&km);

    m = km * 1000;

    printf("\n Distance in Meter = %.2f",m);

    getch();
    return 0;

}
