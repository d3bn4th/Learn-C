/*          
                    Chapter 3: Conditional Instructions
In C, we are able to  execute instructions on a condition(s) being met.
Decision Making Instructions in C : 
            1. If - else Statements
            2. Switch Statements 

*/  
#include <stdio.h>

int main()
{
    /* 
    // Find whether given number is even
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if(num == 1){
        printf("%d is unity which is neither even nor odd\n", num);
    }

    else{
        if(num % 2 == 0){
            printf("%d is even\n", num);
        }
        else{
            printf("%d is odd\n", num);
        }    
    }
    */
    
    // Program to check eligibility for Drivers Licence
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age <= 70 && age >= 18)
    {
        printf("You can drive!");
    }
    else
    {
        printf("You cannot drive!\n");
    }
    return 0;
}

/* Logical Operators: 
   && - AND
   || - OR
   !  - NOT
*/ 

