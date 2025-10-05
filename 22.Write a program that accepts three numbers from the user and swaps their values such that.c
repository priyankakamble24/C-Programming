// Three Number Swapping

#include <stdio.h>
#include <conio.h>

int main()
{
    int A = 0, B = 0, C = 0 , Temp;

    printf("\n Enter First Number : ");
    scanf("%d",&A);

    printf("\n Enter Second Number : ");
    scanf("%d",&B);

    printf("\n Enter Third Number : ");
    scanf("%d",&C);

    printf("\n \n Before Swapping : A = %d , B = %d , C = %d ", A ,B , C);

    Temp = A ;
    A = B ;
    B = C ;
    C = Temp ;

    printf("\n \n After Swapping : A = %d , B = %d , C = %d ", A ,B , C);

    getch();
    return 0;


}
