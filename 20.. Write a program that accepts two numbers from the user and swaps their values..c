// Swapping Two Numbers

#include <stdio.h>
#include <conio.h>

int main()
{
    int No1 = 0, No2 = 0, Temp = 0;

    printf("\n Enter The First Number : ");
    scanf("%d",&No1);

    printf("\n Enter The Second Number : ");
    scanf("%d",&No2);

    printf("\n Before Swapping : No1 = %d, No2 = %d. ", No1 , No2,Temp);

    Temp = No1;
    No1 = No2;
    No2 = Temp;

    printf("\n After Swapping : No1 = %d, No2 = %d. ", No1 , No2, Temp);


    getch();
    return 0;


}
