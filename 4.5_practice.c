/*
    Q 1.  WAP to print the multiplication table of a given number.
    Q 2.  WAP to print the multiplication table of 10 in reversed order.
*/   

// Q 1.
#include <stdio.h>

int main()
{
    int num;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication Table of %d\n", num);
    while(i<11){
        printf("%d x %d = %d\n", num, i, num*i);
        i++;
    }
    return 0;
}

// Q 2.
#include <stdio.h>

int main()
{
    printf("Multiplication Table of 10 in Reverse\n");
    for(int i = 10;i>0;i--){
        printf("10 x %d = %d\n", i, 10*i);
    }
    return 0;
}
