/*
    Q. Write a program to find whether a year entered by the user is a leap year or not
       Take year as an input from the user.

       
        # How to determine whether a year is a Leap Year(it has 366 days).
    Step 1: If the year is evenly divisible by 4.Otherwise go to step 5.
    Step 2: If the year is evenly divisible by 100. Otherwise go to step 4.
    Step 3: If the year is evenly divisible by 400. Otherwise go to step 5.
    Step 4: The year is a Leap Year(it has 366 days).
    Step 5: The year is not a leap year(it has 365 days).
*/
#include <stdio.h>

int main()
{
    // Leap year is divisible by 4 but not ending with XX00.
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    
    if(year%4 == 0  && year%100 != 0){
        printf("Leap Year");
    } 
    else if(year%4 == 0  && year%100 == 0 && year%400 == 0){
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }

    return 0;
}