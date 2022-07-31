/*
            # Increment and Decrement Operators(++ , --)
    
    # Postfix Increment   
        i++ ---> i is increased by 1.
        i-- ---> i is decreased by 1.
        
    examples:
        printf("i++ = %d", i++); //prints i and then increaments it by 1.
        printf("i-- = %d", i--); //prints i and then decreaments it by 1.
    
    # Prefix Increment  
        ++i ---> i is increased by 1.
        --i ---> i is decreased by 1.
    examples: 
        printf("++i = %d", ++i); //increaments it by 1 and then prints i.
        printf("--i = %d", --i); //decreaments it by 1 and then prints i.
    
    Note: Their definition changes while being used the program.

    # Compound Increments
    {+=, -=, *=, /=, %=} is a compound assingment operators
    i = 0
    i += 10; increase i by 10 => i = 10.
    i -= 10; decreses i by 10 => i = -10 
      
*/
#include <stdio.h>

int increment(int a, int b)
{
	a = 5;

	// POSTFIX INCREMENT
	b = a++;
	printf("5++ = %d \n", b);  // prints b and then increments it

	// PREFIX INCREMENT
	int c = ++b;
	printf("++5 = %d\n", c);// increments b and then prints it.
}

#include <stdio.h>

int decrement(int a, int b)
{
	a = 5;

	// POSTFIX DECREMENT
	b = a--;
	printf("5-- = %d\n", b); //prints b and then decrements it

	// PREFIX DECREMENT
	int c = --b;
	printf("--5 = %d\n", c); //decrements b and then prints it.
}

// Driver code
int main()
{
	int x, y;
	increment(x, y);
    decrement(x, y);

	return 0;
}
