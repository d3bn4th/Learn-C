/*  
            Chapter 2: Instructions and Operators

In C Programming Language there are 3 types of intructions
    1. Type Declaration Instruction (eg. int a = 4, b = 5, c;)
    2. Arithmetic Instruction (eg. c = a + b)
    3. Control Instruction
*/ 
#include <stdio.h>

int main()
{
    int a = 4, b = 5, c;
    // a + b = c; // Wrong by convention
    c = a + b; // Right by convention
    printf("%d", c); 
    
    return 0;
}
