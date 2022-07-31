/*
    Q 4.  WAP to calculate the sum of the first 10 multiples of 8.
*/
//Q 4.
#include <stdio.h>

int main()
{
    int sum = 0;
    for(int i = 1; i <= 10; i++){
        sum += 8*i;      
    }
    printf("SUM : %d", sum);   
    return 0;
}