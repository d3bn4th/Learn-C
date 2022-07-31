/*
    Q. Write a program to find greatest of the four number entered by the user.
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);

    if(a>b && a>c){
        printf("Gratest No: %d", a);
    }
    if(b>a && b>c){
        printf("Gratest No: %d", b);
    }
    if(c>b && c>a){
        printf("Gratest No: %d", c);
    }
    return 0;
}