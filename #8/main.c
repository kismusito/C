#include <stdio.h>
#include <stdbool.h>

int problem1()
{

    int n;
    bool condition = true;

    do
    {
        printf("Number: ");
        scanf("%i", &n);
        if (n < 10)
        {
            printf("One digit \n");
        }
        else
        {
            if (n < 100 && n >= 10)
            {
                printf("Two digits \n");
            }
            else
            {
                if (n >= 100 && n < 1000)
                {
                    printf("Three digits \n");
                }
            }
        }

        if (n == 0)
        {
            condition = false;
        }
    } while (condition);
    return 0;
}

int problem2()
{
    int n = 0, sum = 0, i = 0, prom;

    do
    {
        printf("Number: ");
        scanf("%i", &n);

        if (n != 0)
        {
            sum += n;
            i++;
        }

    } while (n != 0);

    prom = sum / i;
    printf("Prom: %i \n", prom);
    return 0;
}

int problem3()
{
    float weightPiece, sumPieces = 0, i = 0;
    int p1 = 0, p2 = 0, p3 = 0;

    do
    {
        printf("Piece weight: ");
        scanf("%f", &weightPiece);

        if (weightPiece != 0)
        {
            sumPieces += weightPiece;
            i++;

            if (weightPiece >= 9.8 && weightPiece <= 10.2)
            {
                p1++;
            }
            else
            {
                if (weightPiece <= 9.8)
                {
                    p2++;
                }
                else
                {
                    if (weightPiece > 10.2)
                    {
                        p3++;
                    }
                }
            }
        }

    } while (weightPiece != 0);

    printf("Total pieces: %.f \n", i);
    printf("Between 9.8 Kg and 10.2 Kg: %i \n", p1);
    printf("More than 10.2: %i \n", p2);
    printf("Less than 9.8: %i \n", p3);
    return 0;
}

int probme4()
{
    float sum = 0, n;

    do
    {
        printf("Number: ");
        scanf("%f", &n);

        if (n != 9999)
        {
            sum += n;
        }
    } while (n != 9999);

    printf("Final sum: %.2f", sum);
    return 0;
}

int problem5()
{
    int accountNumber;
    float totalSal = 0, sal;

    do
    {
        printf("Account number: ");
        scanf("%i", &accountNumber);

        if (accountNumber >= 0)
        {
            printf("Sal: ");
            scanf("%f", &sal);
            if (sal > 0)
            {
                printf("Acreedor \n");
            }
            else
            {
                if (sal < 0)
                {
                    printf("Deudor \n");
                }
                else
                {
                    printf("Nulo \n");
                }
            }
            totalSal += sal;
        }
    } while (accountNumber >= 0);

    printf("Total accounts money: %.2f", totalSal);
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