#include <stdio.h>

int main()
{
    int radius;
    float pi = 3.14;
    printf("Enter the radius of a circle:");
    scanf("%d", &radius);
    printf("Area of the cricle is %f", pi*radius*radius);

    return 0;
}
