/*
    Q 5.  WAP to calculate factorial of a given number using:
            a. for loop
            b. while loop
*/

// Q 5.
// (a) for loop

#include <stdio.h>
int main()
{
    int num;
    int fac = 1;
    printf("Find factorial of ");
    scanf("%d", &num);

    printf("%d! = ", num);
    for(int i = num; i >= 1; i--){
        fac *= i;
        
        // For presentation only
        printf("%d", i);
        if(i<=num && i>1){
            printf("x");
        }
    }
    printf(" = %d\n", fac);

    return 0;
}

// (b) while loop
#include <stdio.h>

int main()
{
    int num;
    int fac = 1;
    int i = 1;
    printf("Find factorial of ");
    scanf("%d", &num);
    while(i <= num){
        fac *= i;
        i++;
    }
    printf("%d! = %d", num, fac);

    return 0;
}

