#include <stdio.h>
/*
    3*x - 8*y is = ?
    In C language simple mathematical rules like BODMAS, no longer applies
    The answer tot he above question is provided by operator precedence & associativity.

    # Operator Precedence : 
    The following is the Operator Priority in C.
                     Priority     Operators
                      1st           * / %
                      2nd            + -
                      3rd             =


*/
int main()
{
    int x = 4;
    int y = 9;

    printf("The value of 3x - 8y is %d \n", 3*x - 8*y);
    return 0;
}
