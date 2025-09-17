#include <stdio.h>

int main()
{

    float angle1, angle2, angle3;

    printf("Enter angle1:");
    scanf("%f",&angle1);

    printf("Enter angle2:");
    scanf("%f",&angle2);

    angle3=180-(angle1+angle2);

    printf("\nangle1 %.2f",angle1);
    printf("\nangle2 %.2f",angle2);
    printf("\nangle3 is %.2f",angle3);

    return 0;
}