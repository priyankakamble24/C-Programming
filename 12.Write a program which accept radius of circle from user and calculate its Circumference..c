//Circumference Of Circle

#include <stdio.h>
#include <conio.h>

int main ()
{
    float Radius , Cir;
    const float PI = 3.14;

    printf("\n Enter The Radius Of Circle : ");
    scanf("%f",&Radius);

    Cir = 2 * PI * Radius;

    printf("\n Circumference Of Circle = %.2f" , Cir);


    getch();
    return 0;
}
