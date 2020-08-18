#include <stdio.h>

int problem1()
{
    float salary;

    printf("Salary: ");
    scanf("%f", &salary);

    if (salary > 3000)
    {
        printf("You must pay impuest");
    }
    return 0;
}

int problem2()
{
    int n1, n2;

    printf("Number 1: ");
    scanf("%i", &n1);

    printf("Number 2: ");
    scanf("%i", &n2);

    if (n1 > n2)
    {
        printf("N1 is hightes than N2");
    }
    else
    {
        printf("N2 is hightes than N1");
    }
    return 0;
}

int problem3()
{
    int n1, n2, sum, dif, div, product;

    printf("Num 1: ");
    scanf("%i", &n1);

    printf("Num 2: ");
    scanf("%i", &n2);

    if (n1 > n2)
    {
        sum = n1 + n2;
        dif = n1 - n2;
        printf("Sum: %i", sum);
        printf("\n");
        printf("Diference: %i", dif);
        printf("\n");
    }
    else
    {
        if (n2 > 1)
        {
            div = n2 / n1;
            product = n2 * n1;
            printf("Product: %i", product);
            printf("\n");
            printf("Division: %i", div);
            printf("\n");
        }
        else
        {
            printf("The divisor is 0");
        }
    }
    return 0;
}

int problem4()
{
    float n1, n2, n3, sum, prom;
    printf("Student califications");
    printf("\n");

    printf("Note 1: ");
    scanf("%f", &n1);

    printf("Note 2: ");
    scanf("%f", &n2);

    printf("Note 3: ");
    scanf("%f", &n3);

    sum = n1 + n2 + n3;
    prom = sum / 3;

    if (prom >= 7)
    {
        printf("Promoted");
    }
    else
    {
        printf("Failure");
    }

    return 0;
}

int problem5()
{
    int n;

    printf("Number: ");
    scanf("%i", &n);

    if (n >= 10)
    {
        printf("2 digits");
    }
    else
    {
        printf("1 digit");
    }
    return 0;
}

int main()
{
    problem1();
    problem2();
    problem3();
    problem4();
    problem5();

    return 0;
}