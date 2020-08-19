#include <stdio.h>

int problem1()
{
    // this exercice is trash

    int day, month, year;

    printf("Day: ");
    scanf("%i", &day);

    printf("Month: ");
    scanf("%i", &month);

    printf("Year: ");
    scanf("%i", &year);

    if (day == 25 && month == 12)
    {
        printf("Is Chrishmast \n");
    }
    return 0;
}

int problem2()
{
    int n1, n2, n3, sum, product;

    printf("Num 1: ");
    scanf("%i", &n1);

    printf("Num 2: ");
    scanf("%i", &n2);

    printf("Num 3: ");
    scanf("%i", &n3);

    if (n1 == n2 && n2 == n3 && n1 == n3)
    {
        sum = n1 + n2;
        product = sum * n3;

        printf("Sum: %i\n", sum);
        printf("Product: %i\n", product);
    }
    return 0;
}

int problem3()
{

    int n1, n2, n3;

    printf("Num 1: ");
    scanf("%i", &n1);

    printf("Num 2: ");
    scanf("%i", &n2);

    printf("Num 3: ");
    scanf("%i", &n3);

    if (n1 < 10 && n2 < 10 && n3 < 10)
    {
        printf("All values are lower than 10 \n");
    }
    return 0;
}

int problem4()
{
    int n1, n2, n3;

    printf("Num 1: ");
    scanf("%i", &n1);

    printf("Num 2: ");
    scanf("%i", &n2);

    printf("Num 3: ");
    scanf("%i", &n3);

    if (n1 < 10 || n2 < 10 || n3 < 10)
    {
        printf("One or more of the numbers is lower than 10 \n");
    }
    return 0;
}

int problem5()
{
    int x, y;

    printf("X: ");
    scanf("%i", &x);

    printf("Y: ");
    scanf("%i", &y);

    if (x != 0 && y != 0)
    {
        if (x > 0 && y > 0)
        {
            printf("Cuadrant 1 \n");
        }
        else
        {
            if (x < 0 && y > 0)
            {
                printf("Cuadrant 2 \n");
            }
            else
            {
                if (x < 0 && y < 0)
                {
                    printf("Cuadrant 3 \n");
                }
                else
                {
                    printf("Cuadrant 4 \n");
                }
            }
        }
    }
    return 0;
}

int problem6()
{
    float salary;
    int antiguity;

    printf("Salary: ");
    scanf("%f", &salary);

    printf("Antiguity: ");
    scanf("%i", &antiguity);

    if (salary < 500 && antiguity >= 10)
    {
        salary += salary * .2;
    }
    else
    {
        if (salary < 500 && antiguity < 10)
        {
            salary += salary * .05;
        }
    }

    printf("Salary: %.2f\n", salary);
    return 0;
}

int problem7()
{

    int n1, n2, n3, min, max, diference;

    printf("Num 1: ");
    scanf("%i", &n1);

    printf("Num 2: ");
    scanf("%i", &n2);

    printf("Num 3: ");
    scanf("%i", &n3);

    if (n1 < n2 && n1 < n3)
    {
        min = n1;
        if (n2 > n1 && n2 > n3)
        {
            max = n2;
        }
        else
        {
            if (n3 > n1 && n3 > n2)
            {
                max = n3;
            }
        }
    }
    else
    {
        if (n2 < n1 && n2 < n3)
        {
            min = n2;
            if (n1 > n2 && n1 > n3)
            {
                max = n1;
            }
            else
            {
                if (n3 > n1 && n3 > n2)
                {
                    max = n3;
                }
            }
        }
        else
        {
            min = n3;
            if (n1 > n2 && n1 > n3)
            {
                max = n1;
            }
            else
            {
                if (n2 > n1 && n2 > n3)
                {
                    max = n2;
                }
            }
        }
    }

    diference = max - min;

    printf("Min: %i \n", min);
    printf("Max: %i \n", max);
    printf("Diference: %i \n", diference);
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

    return 0;
}