/* 
                # Conditional or Ternary Operator (?:)
A short-hand "if-else" can be written using the Conditional or Ternary Operator.
Syntax: 
The conditional operator is of the form
        variable = (condition) ? Expression2 : Expression3;
Or syntax will also be in this form

        (condition) ? (variable = Expression2) : (variable = Expression3);
Ternary Operators --> { ? :}
*/
#include <stdio.h>

int main()
{
        int a;
        printf("Enter a number: ");
        scanf("%d", &a);
        // One Liner if else statement
        (a < 5) ? printf("%d is less than 5", a) : printf("%d is greater than 5", a);

        return 0; 
}

