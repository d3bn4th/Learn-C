/*
    Q. Calculate income tax paid by an employee to the government as per the slab
       mentioned below:
                    Income Slab         Tax
                    2.5L - 5.0L         5%
                    5.0L - 10.0L        20%
                    Above 10.0L         30%
        Note: that there is no tax below 2.5L. Take income amount as an input from
        the user.
*/
#include <stdio.h>

int main()
{
    int income;
    float i;
    float tax;
    printf("Enter income: ");
    scanf("%d", &income);

    i = income/100000;  // to compare 
    if(i <= 2.5){
        printf("Tax: 0 INR");
    }
    else if(i > 2.5 && i <= 5.0){
        // 2.5L - 5.0L         5% TAX
        tax = 0.05 * income;
        printf("Tax: %.1f INR \n", tax);
    }
    else if(i > 5.0 && i <= 10.0){
        // 5.0L - 10.0L        20% TAX
        tax = 0.2 * income;
        printf("Tax: %.1f INR \n", tax);
    }
    else if(i > 10.0){
        // Above 10.0L         30% TAX
        tax = 0.3 * income;
        printf("Tax: %.1f INR \n", tax);
    }
    printf("Thank You! for using our service.");
    return 0;
}