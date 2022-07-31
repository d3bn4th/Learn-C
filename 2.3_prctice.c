#include <stdio.h>

int main()
{
    // Q3. Write a program to check whether a number is divisible by 97 or not 
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Divisibility test returns: %d", num%97);
    return 0;

}
