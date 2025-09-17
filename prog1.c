#include <stdio.h>

int main()
{
    const float A=1.8;
    float celsius,fahrenheit;

    printf("Enter the temperature in celsius:");
    scanf("%f",&celsius);

    fahrenheit = (A*celsius)+32;

    printf("\ntemperature in fahrenheit %.2f",fahrenheit);
    printf("\ntemperature in celsius %.2f",celsius);

    return 0;
}