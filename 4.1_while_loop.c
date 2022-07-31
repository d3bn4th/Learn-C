/*
                1.      While Loop

    Syntax:
    While(Condition is True){
        // Code                    The block keeps executing as long as the 
        // Code             --->   Condition is True.
    }
# Infinite Loop
If the condition never becomes False, the While Loop keeps getting executed. Such a loop
is known as an infinite loop.
Thus we need to write a terminating conditon/loop as it will run for ever otherwise.
*/

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    while(a<10){
        printf("%d\n", a);
        a++;
    }
    return 0;
}
// # Infinite Loop
#include <stdio.h>

int main()
{
    int a = 1;
    while(a>0){           //      <---- As a = 1 and is incremented (a++;)
        printf("%d", a);  //             a will always be > 0
        a++;              //            This will lead to an Infinite Loop.
    }
    return 0;
}

//Q.  WAP to print natural numbers from 10 to 20 When initial loop counter
//    i is initialized to 0.
#include <stdio.h>

int main()
{
    int i = 0;
    while(i < 21){   // ends when i = 20.
        if(i >= 10){
            printf("%d ", i);
        } 
        i++;  // Increment operation i = i + 1
    }    
    return 0;
}