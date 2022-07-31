/*
    Q 3.  WAP to sum first ten natural numbers using :
            a. while Loop
            b. do-while loop
            c. for loop
    Q 4.  WAP to calculate the sum of the first 10 multiples of 8.
*/

//Q 3.

#include <stdio.h>

int main()
{
    // a. while loop
    printf("\nFirst 10 natural no.(while loop):    ");
    int i = 1;
    while(i < 11){
        printf("%d ", i);
        i++;
    }
    // b. do while loop
    printf("\nFirst 10 natural no.(do-while loop): ");
    int j = 1;
    do{
        printf("%d ", j);
        j++;
    }while(j < 11);

    // c. for loop
    printf("\nFirst 10 natural no.(for loop):      ");
    for(int k = 1; k<11; k++){
        printf("%d ", k);
    }

    return 0;
}