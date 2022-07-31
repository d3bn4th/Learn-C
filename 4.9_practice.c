/*
    Q 6.  WAP to check wether given is prime or not.
            a. while Loop
            b. for loop
*/

// a. while loop
#include <stdio.h>
int main()
{
    int num, prime=0;
    int i = 2;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(i< num){
        if(num%i == 0){
            prime = 1;
            break;
        }
    }
    if(prime == 1){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}


// b. for loop

#include <stdio.h>

int main()
{
    int num, prime = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i = 2; i < num; i++){
        if(num%i == 0){
            prime = 1;
            break;
        }
    }
    if(prime == 1){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}

