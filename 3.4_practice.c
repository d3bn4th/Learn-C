/* 
Q. Write a program to find grade of a student given his marks based on below:
   90 - 100 A
   80 - 90  B
   70 - 80  C
   60 - 70  D
   <60      F
*/  

int main()
{
    int marks;
    int grade_point;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    grade_point = marks/10;
    // Marks between 99 to 60 
    switch(grade_point){
        case 9:
        printf("Your Grade: A\n");
        break;

        case 8:
        printf("Your Grade: B\n");
        break;

        case 7:
        printf("Your Grade: C\n");
        break;
        
        case 6:
        printf("Your Grade: D\n");
        break;
    }
    // Marks above 100 or Below 60
    if(marks > 100 || marks < 0){
        printf("Invalid Marks\n");
        printf("Enter marks in range [100,0]\n");
    }
    if(marks == 100){
        printf("Your Grade: A+\n");
    }
    if(marks < 60){
        printf("Your Grade: F\n");
    }
     
    return 0;
}

