#include <stdio.h>

int main()
{
    int a = 4;
    int b = 8;

    // {'a', 'b'} are Operands and {+, -, *, /} are Arithmetic Operators
    // Operands can be int, float etc
    // printf("The value of a + b = %d", a + b);
    // printf("The value of a - b = %d", a - b);
    // printf("The value of a * b = %d", a * b);
    // printf("The value of a / b = %d", a / b);

    // Modular Operator(%) - used to find remainder
    printf("5 when divivded by 2 leaves remainder of %d", 5%2);

    // There is no operator to perform exponentiation in C
    // but we can use pow function x^y = pow(x,y) 
    ///#include <math.h> it return float value. (%f)

    /* 
    Int and Int   == Int
    Int and Float == Float
    Float and Float == Float
    5/2 = 2 (not 2.5)
    2/5 = 0 (not 0.25) but,
    5.0/2 = 2.5
    2.0/5 = 0.25
    if int a = 3.5; [Here, 3.5(float) will be demoted to 3(int)]
    if float a = 8; [Here, 8(int) will be promoted to 8.0(float)]

    eg. 
    int k = 3.0/9
    [3.0/9=0.333, since k is an int, it cannot store float. Thus, 0.33 is demoted to 0]
    Thus, k = 0 (int)
    */
    return 0;
}
