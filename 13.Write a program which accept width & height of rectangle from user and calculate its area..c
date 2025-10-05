// Area Of Rectangle

#include <stdio.h>
#include <conio.h>

int main()
{

    int height, width , Rect;

    printf("\n\n Enter The Length Of Rectangle : ");
    scanf("%d",&height);

    printf("\n\n Enter The Width Of Rectangle : ");
    scanf("%d",&width);

    Rect = height * width;

    printf("\n\n Area Of Rectangle = (%d * %d) = %.2d",height , width , Rect);

    getch();
    return 0;



}
