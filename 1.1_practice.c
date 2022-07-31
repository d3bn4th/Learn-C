#include <stdio.h>
// Finding Area of rectangle from user input
int main()
{
    int lenght, breadth;
    // int area = lenght *breadth;
    printf("Enter the lenght: ");
    scanf("%d", &lenght);

    printf("Enter the breadth: ");
    scanf("%d", &breadth);

    printf("Area of the rectangle is %d", lenght*breadth);
    return 0;
}
