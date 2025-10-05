
//Radius Of Circle

#include <stdio.h>
#include <conio.h>

int main()
{
    float Radius , Area ;
    const float PI = 3.14;

    printf("\n Enter The Radius Of Circle : ");
    scanf("%f",&Radius);

    Area = PI * Radius * Radius;

    printf("\n Area Of Circle = %.2f", Area);

     getch();
     return 0;


}
