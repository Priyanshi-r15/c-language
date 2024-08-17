#include <stdio.h>

int main()
{
    float Base_salary, gross_salary, HRA, DA, TA;

    printf("Base Salary: ");
    scanf("%f" ,&Base_salary);

    printf("HRA: ");
    scanf("%f" ,&HRA);

    printf("DA: ");
    scanf("%f" ,&DA);

    printf("TA: ");
    scanf("%f" ,&TA);

    HRA = (HRA / 100) * Base_salary;
    DA = (DA / 100) * Base_salary;
    TA = (TA / 100) * Base_salary;

    gross_salary = Base_salary + HRA + DA + TA;

    printf("Gross salary: %f" ,gross_salary);

    return 0;
}