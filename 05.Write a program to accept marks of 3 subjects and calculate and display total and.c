// Marks OF 3 Subject

#include <stdio.h>
#include <conio.h>

int main()
{
    int Phy = 0, Che = 0 , Math = 0 , Total = 0;
    float Per;

    printf("\n Enter The 3 Subject Marks => \n ");


    printf("\n\t Enter The Physics Marks : /n ");
    scanf("%d",&Phy);

    printf("\n Enter The Chemistry  Marks : ");
    scanf("%d",&Che);

    printf("\n Enter The Math Marks : ");
    scanf("%d",&Math);

    Total = Phy + Che + Math ;
    Per = float(Total)/3;

    printf("\n Total Marks Of Three Subjects = (%d + %d + %d) = %d",Phy , Che , Math, Total);

    printf("\n\n Percentage Of Subjects = %.2f",Per);

    getch();
    return 0;


}
