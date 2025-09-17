#include <stdio.h>

int main()
{
    int Basesalary;
    float HRA,DA,TA,gross;

    printf("Enter Basesalary:");
    scanf("%d",&Basesalary);

    printf("Enter HRA:");
    scanf("%f",&HRA);

    printf("Enter DA:");
    scanf("%f",&DA);

    printf("Enter TA:");
    scanf("%f",&TA);

    HRA = Basesalary * 0.1;
    DA = Basesalary * 0.05;
    TA = Basesalary * 0.08;

    gross=Basesalary+HRA+DA+TA;

    printf("\nBasesalary: %.2d",Basesalary);
    printf("\nHRA: %.2f",HRA);
    printf("\nDA %.2f",DA);
    printf("\nTA %.2f",TA);
    printf("\ngross %.2f",gross);

    return 0;

}