#include <stdio.h>
#include <conio.h>

int main()
{
    char Name[50] , Course[50] , City[50];
    int RollNumber;

    printf("\n Enter The Student Detail : \n");

    printf("\n Enter The Student Name : ");
    scanf("%s",Name);

    printf("\n Enter The Roll Number : ");
    scanf("%d",&RollNumber);

    printf("\n Enter The Course : ");
    scanf("%s",Course);

    printf("\n Enter The City Name : ");
    scanf("%s",City);

    printf("\n\n Student Information ----------\n");

    printf("\n Name               : %s",Name);
    printf("\n RollNumber         : %d",RollNumber);
    printf("\n Course             : %s",Course);
    printf("\n City               : %s",City);

    getch();
    return 0;
}
