#include <stdio.h>

int problem1()
{
    int n1, n2, n3;

    printf("Num 1: ");
    scanf("%i", &n1);

    printf("Num 2: ");
    scanf("%i", &n2);

    printf("Num 3: ");
    scanf("%i", &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("%i\n", n1);
    }
    else
    {
        if (n2 > n1 && n2 > n3)
        {
            printf("%i\n", n2);
        }
        else
        {
            printf("%i\n", n3);
        }
    }
    return 0;
}

int problem2()
{
    int n;

    printf("Number: ");
    scanf("%i", &n);

    if (n > 0)
    {
        printf("positive\n");
    }
    else
    {
        if (n < 0)
        {
            printf("negative\n");
        }
        else
        {
            printf("null\n");
        }
    }
    return 0;
}

int problem3()
{
    int n;

    printf("Number: ");
    scanf("%i", &n);

    if (n < 1000)
    {
        if (n >= 100)
        {
            printf("Three digits \n");
        }
        else
        {
            if (n >= 10)
            {
                printf("Two digits \n");
            }
            else
            {
                printf("One digit \n");
            }
        }
    }
    else
    {
        printf("The number has more than 3 digits \n");
    }
    return 0;
}

int problem4()
{

    int totalQuestions, correctQuestions, percentaje;

    printf("Total Questions: ");
    scanf("%i", &totalQuestions);

    printf("Correct Questions: ");
    scanf("%i", &correctQuestions);

    percentaje = (correctQuestions * 100) / totalQuestions;

    if (percentaje >= 90)
    {
        printf("Nivel máximo \n");
    }
    else
    {
        if (percentaje >= 75 && percentaje < 90)
        {
            printf("Nivel medio \n");
        }
        else
        {
            if (percentaje >= 50 && percentaje < 75)
            {
                printf("Nivel regular \n");
            }
            else
            {
                printf("Fuera de nivel \n");
            }
        }
    }
    return 0;
}

int main()
{
    problem1();
    problem2();
    problem3();
    problem4();

    return 0;
}