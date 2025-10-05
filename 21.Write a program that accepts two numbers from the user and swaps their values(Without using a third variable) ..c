// Swapping Without Using a Third Variable

#include <stdio.h>
#include <conio.h>

int main()
{
    int No1 = 0 , No2 = 0;

    printf("\n Enter The First Number : ");
    scanf("%d",&No1);

    printf("\n Enter The Second Number : ");
    scanf("%d",&No2);

    printf("\n Before Swapping : No1 = %d , No2 = %d" , No1 , No2);

    No1 = No1 + No2 ;

    No2 = No1 - No2 ;

    No1 = No1 - No2 ;

    printf("\n\n After Swapping : No1 = %d , No2 = %d" , No1 , No2);

    getch();
    return 0;


}
