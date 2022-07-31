#include <stdio.h>
/*
    Q. Write a program to find out whether a student is pass or fail, if it 
       requires total 40% and at least 33% in each subject to pass.
       Assume 3 subjects and take marks as an input from the user.
*/
int main()
{
    int a, b, c;
    float percentage;
    printf("Enter marks for sub-a: ");
    scanf("%d",&a);
    
    printf("Enter marks for sub-b: ");
    scanf("%d",&b);
    
    printf("Enter marks for sub-c: ");
    scanf("%d",&c);

    percentage = (a + b + c)/3;
    printf("%.1f - ", percentage);

    if(percentage>=40 && a >= 33 && b >= 33 && c >= 33){
        printf("PASS");
    }
    else{
        printf("FAIL");
    }
    
    return 0;
}
