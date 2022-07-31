#include <stdio.h>
/* 
            # Switch Case 
    Switch-Case is used when we have to make a choice between number of
    alternatives for a given variable(Must be int).

    Syntax:
    switch(integer-expression)
    {
        case c1:
            code;
        
        case c1:
            code;
                                c1, c2, c3...---> Constansts
        case c1:                code ---> Any Valid C Code
            code;
        .
        .
        . and so on
        default:
            code;
    }

The value of integer-expression is matched against c1,c2,c3... If it matches any of
these cases, that case along with all subsequent "case" and "default" statements 
are executed
*/

int main()
{
    int rating;
    printf("Enter you rating: ");
    scanf("%d", &rating);
    
    switch(rating){
        case 1 :
            printf("Hi 1 \n");
            break;
        case 2 :
            printf("Hi 2 \n");
            break;
        case 3 :
            printf("Hi 3 \n");
            break;
        case 4 :
            printf("Hi 4 \n");
            break;
        case 5 :
            printf("Hi 5 \n");
            break;
        default :
            printf("Invalid Raiting!");
    }
    return 0;
}
