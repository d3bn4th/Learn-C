#include <stdio.h>
/*
                # do while loop

    do while loop works very similar to while loop
    while: checks the conditon & then executes the code.
    do while: executes the code and then checks th conditon.

            do-while loop = while loop which executes atleast once.
    The syntax of do-while loop looks like this;

    do{
        //code;
        //code;
    }while(Condition);


*/      

int main()
{
     int i = 0;
    //int i = 200; // here it will execute the code atleast once .i.e print 200.
                   // eventhough i<10 is False.
    do{
        printf("The value of i is %d\n", i); // runs once and then checks while.
        i++;
    }while(i<10);

    return 0;
}


// Q. WAP to print first n natural numbers using do-while loop.

#include <stdio.h>

int main()
{
    int i = 1;
    int n;
    scanf("%d",&n);

    printf("First %d natural numbers ", n);
    do{
        printf("%d ", i);
        i++;
    }while(i < n+1);

    return 0;
}