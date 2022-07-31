#include <stdio.h>

int main()
{
    // (0°C × 9/5) + 32 = 32°F
    float celsius = 37;
    float fahrenheit;

    fahrenheit  = (celsius*9/5) + 32;
    printf("Given temp in Celsius is equal to %f Fahrenheit ", fahrenheit);
    
    return 0;
}
