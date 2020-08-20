#include <stdio.h>

int problem1()
{
    int x = 1;

    while (x <= 100)
    {
        printf("%i \n", x);
        x++;
    }
    return 0;
}

int problem2()
{
    int x, i = 1;

    printf("Number: ");
    scanf("%i", &x);

    while (i <= x)
    {
        printf("%i \n", i);
        i++;
    }
    return 0;
}

int problem3()
{
    int x, i = 1, sum = 0, prom;

    while (i <= 10)
    {
        printf("Number: ");
        scanf("%i", &x);
        sum = sum + x;
        i++;
    }

    prom = sum / 10;

    printf("Sum: %i \n", sum);
    printf("Prom: %i \n", prom);
    return 0;
}

int problem4()
{
    int nPiezes = 0, isApt = 0, i = 1;
    float longPieze = 0;

    printf("N piezes: ");
    scanf("%i", &nPiezes);

    while (i <= nPiezes)
    {
        printf("Pieze long: ");
        scanf("%f", &longPieze);

        if (longPieze >= 1.20 && longPieze <= 1.30)
        {
            isApt++;
        }
        i++;
    }

    printf("Total: %i", isApt);
    return 0;
}

int problem5()
{
    int i = 1, totalHight = 0, totalLow = 0;
    float note;

    while (i <= 10)
    {

        printf("Note: ");
        scanf("%f", &note);

        if (note >= 7)
        {
            totalHight++;
        }
        else
        {
            totalLow++;
        }

        i++;
    }
    printf("More than 7: %i\n", totalHight);
    printf("Lower than 7: %i\n", totalLow);

    return 0;
}

int problem6()
{
    int tHeight, i = 1;
    float height = 0, sum = 0, prom = 0;

    printf("Total heights: ");
    scanf("%i", &tHeight);

    while (i <= tHeight)
    {
        printf("Height: ");
        scanf("%f", &height);
        sum += height;
        i++;
    }

    prom = sum / tHeight;

    printf("Prom: %.2f \n", prom);
    return 0;
}

int problem7()
{
    int nEmployers, i = 1, a = 0, b = 0;
    float sum = 0, salary;

    printf("Number of employes: ");
    scanf("%i", &nEmployers);

    while (i <= nEmployers)
    {
        printf("Employer salary: ");
        scanf("%f", &salary);
        sum += salary;

        if (salary >= 200 && salary <= 300)
        {
            a++;
        }
        else
        {
            if (salary > 300)
            {
                b++;
            }
        }

        i++;
    }

    printf("Total employers: %i \n", nEmployers);
    printf("Total cost: %.2f \n", sum);
    printf("Between average: %i \n", a);
    printf("More than average: %i \n", b);

    return 0;
}

int problem8()
{
    int i = 1, nActual = 0;

    while (i <= 25)
    {
        nActual += 11;
        printf("Actual number on serie: %i \n", nActual);
        i++;
    }
    return 0;
}

int problem9()
{
    int i = 1;

    while (i <= 500)
    {
        if (i % 8 == 0)
        {
            printf("Multiple: %i \n", i);
        }
        i++;
    }
    return 0;
}

int problem10()
{

    int sum1 = 0, sum2 = 0, i = 1, j, value = 0;

    while (i <= 2)
    {
        j = 1;
        printf("List %i \n", i);
        while (j <= 5)
        {
            printf("Value: ");
            scanf("%i", &value);
            if (i == 1)
            {
                sum1 += value;
            }
            else
            {
                sum2 += value;
            }
            j++;
        }
        i++;
    }

    if (sum1 > sum2)
    {
        printf("List 1 hightes %i \n", sum1);
    }
    else
    {
        printf("List 2 hightes %i \n", sum2);
    }
    return 0;
}

int problem11()
{
    int i = 1, tNumbers, actualNumber, nPar = 0, nInpar = 0;

    printf("Total numbers: ");
    scanf("%i", &tNumbers);

    while (i <= tNumbers)
    {
        printf("Number: ");
        scanf("%i", &actualNumber);
        if (actualNumber % 2 == 0)
        {
            nPar++;
        }
        else
        {
            nInpar++;
        }
        i++;
    }

    printf("Par: %i\n", nPar);
    printf("Inpar: %i\n", nInpar);
    return 0;
}

int main()
{

    problem1();
    problem2();
    problem3();
    problem4();
    problem5();
    problem6();
    problem7();
    problem8();
    problem9();
    problem10();
    problem11();

    return 0;
}