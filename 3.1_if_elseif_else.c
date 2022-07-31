#include <stdio.h>
// Else if is used when workign woth multiple conditions
/*            # Operator Precedence with Logical Operators: 
The following is the Operator Priority in C.
                Priority     Operators
                1st             !        NOT
                2nd           * / %      Multipy, Divide, Moduli
                3rd            + -       Add, Subtract
                4th          <,>,<=,>=   Inequality
                5th            ==,!=     Equality, Not Equal
                6th             &&       AND
                7th             ||       OR
                8th             =        Assingment

*/
int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if(num == 1){
        printf("1\n");
    }
    else if(num == 2){
        printf("2\n");
    }
    else if(num == 3){
        printf("3\n");
    }
    else if(num == 4){
        printf("4\n");
    }
    else if(num == 5){
        printf("5\n");
    }
    else{
        printf("Your number is not 1,2,3,4 and 5");
    }
    // last else is optional
    
    return 0;
}
