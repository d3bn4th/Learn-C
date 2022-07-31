/*
                # for loop
    Syntax:
    for(initialize; test; increment/decrement){
        //code
        //code
    }
    Initialize : Setting a loop counter to initial value.
    Test/check : Checking a condition.
    Increment  : Updating the loop counter.    
*/      

 #include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The First %d Natural numbers is : ", n);
    for(int a = 0; a<n; a++){
        printf("%d ", a+1);
    }
    return 0;
}

            // # Decrementing Loop
#include <stdio.h>
// Countdown timer
int main()
{  
    int n;
    printf("Enter a number to countdown from : "); 
    scanf("%d", &n); 
    printf("Countdown: ");
    for(int i = n; i > 0; i--){ // for loop will keep on running untill i becomes 0.
        printf("%d ", i);
    }
    printf("END");
    return 0;
}


/*
            # Break Statement in C
    The break statement in used to exit loop irrespective of whether the condition is
    True or False.
    Whenever "break" is encountered inside the loop, the control is sent outside the loop

*/
#include <stdio.h>
int main()
{
    for(int a = 1; a < 10; a++){
        printf("%d\n",  a);
        if(a == 4){
            break;
        }
    }
    printf("break statement took you out of the loop.");
    return 0;
}

/*
            # Continue Statement
    The continue statement is used to immideately move to the next iteration of the loop.
    The control is taken to the next iteration thus skipping everthing below 'continue'
    statement inside the loop for that iteration

    Lets us look at an example:
*/ 
#include <stdio.h>

int main()
{
    int i = 0;
    while(i<10){
        i++;
        if(i == 5){
            continue;
        }
        else{
            printf("%d ", i);
        }
    }
    return 0;
}