#include <stdio.h>

int problem1()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        printf("%i \n", i);
    }
    return 0;
}

int problem2()
{
    int i, n, sum = 0, prom;
    for (i = 1; i <= 10; i++)
    {
        printf("Number: ");
        scanf("%i", &n);

        sum += n;
    }

    prom = sum / 10;

    printf("Sum: %i \n", sum);
    printf("Prom: %i \n", prom);
    return 0;
}

int problem3()
{
    int i, note, approved = 0, reject = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Note: ");
        scanf("%i", &note);

        if (note >= 7)
        {
            approved += 1;
        }
        else
        {
            reject += 1;
        }
    }

    printf("Approved: %i \n", approved);
    printf("Reject %i \n", reject);
    return 0;
}

int problem4()
{
    int i, n;

    for (i = 1; i <= 10; i++)
    {
        printf("Number: ");
        scanf("%i", &n);

        if (n % 3 == 0)
        {
            printf("is multiple of 3: %i \n", n);
        }

        if (n % 5 == 0)
        {
            printf("is multiple of 5: %i \n", n);
        }
    }
    return 0;
}

int problem5()
{
    int i, n, o, t = 0;

    printf("Nurber of turns: ");
    scanf("%i", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Number: ");
        scanf("%i", &o);

        if (o >= 1000)
        {
            t += 1;
        }
    }

    printf("Total: %i \n", t);
    return 0;
}

int problem6()
{
    int nV, b, a, area, cMore = 0;

    printf("Number of triangles: ");
    scanf("%i", &nV);

    for (int i = 0; i < nV; i++)
    {
        printf("Base: ");
        scanf("%i", &b);

        printf("Height: ");
        scanf("%i", &a);

        area = (b * a) / 2;
        printf("Base: %i \n", b);
        printf("Height: %i \n", a);
        printf("Area: %i \n", area);

        if (area >= 12)
        {
            cMore++;
        }
    }

    printf("More than 12: %i \n", cMore);
    return 0;
}

int problem7()
{
    int n;

    for (int i = 1; i <= 10; i++)
    {
        printf("Number: ");
        scanf("%i", &n);

        if (i >= 5)
        {
            printf("%i \n", n);
        }
    }
    return 0;
}

int problem8()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%i \n", (5 * i));
    }
    return 0;
}

int problem9()
{
    int n;

    printf("Number: ");
    scanf("%i", &n);

    for (int i = 1; i <= 12; i++)
    {
        printf("%i \n", (n * i));
    }
    return 0;
}

int problem10()
{
    int l1, l2, l3, nT, tE = 0, tI = 0, tEsc = 0;

    printf("Total triangles: ");
    scanf("%i", &nT);

    for (int i = 1; i <= nT; i++)
    {
        printf("Side 1: ");
        scanf("%i", &l1);

        printf("Side 2: ");
        scanf("%i", &l2);

        printf("Side 3: ");
        scanf("%i", &l3);

        if (l1 == l2 && l2 == l3 && l1 == l3)
        {
            tE++;
        }
        else
        {
            if (l1 == l2 || l2 == l3 || l1 == l3)
            {
                tI++;
            }
            else
            {
                tEsc++;
            }
        }
    }

    printf("Equilateros: %i \n", tE);
    printf("Isosceles: %i \n", tI);
    printf("Escaleno: %i \n", tEsc);

    if (tE < tI && tE < tI)
    {
        printf("Equilateros low");
    }
    else
    {
        if (tI < tE && tI < tEsc)
        {
            printf("Isosceles low");
        }
        else
        {
            printf("Escaleno low");
        }
    }

    return 0;
}

int problem11()
{
    int tP, pX, pY, c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    printf("Total points: ");
    scanf("%i", &tP);

    for (int i = 1; i <= tP; i++)
    {
        printf("Print X: ");
        scanf("%i", &pX);

        printf("Print Y: ");
        scanf("%i", &pY);

        if (pX > 0 && pY > 0)
        {
            c1++;
        }
        else
        {
            if (pX < 0 && pY > 0)
            {
                c2++;
            }
            else
            {
                if (pX < 0 && pY < 0)
                {
                    c3++;
                }
                else
                {
                    c4++;
                }
            }
        }
    }

    printf("Cuadrant 1: %i \n", c1);
    printf("Cuadrant 2: %i \n", c2);
    printf("Cuadrant 3: %i \n", c3);
    printf("Cuadrant 4: %i \n", c4);
    return 0;
}

int problem12()
{
    int n, nN = 0, nP = 0, m15 = 0, aP = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("number: ");
        scanf("%i", &n);

        if (n < 0)
        {
            nN++;
        }
        else
        {
            nP++;
        }

        if (n % 15 == 0)
        {
            m15++;
        }

        if (n % 2 == 0)
        {
            aP++;
        }
    }

    printf("Negative numbers: %i \n", nN);
    printf("Positivie numbers: %i \n", nP);
    printf("Multiple of 15 numbers: %i \n", m15);
    printf("Par numbers: %i \n", aP);
    return 0;
}

int problem13()
{
    int age, tM = 0, tT = 0, tN = 0, pM, pT, pN;

    printf("Morning \n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Age student %i: ", i);
        scanf("%i", &age);
        tM += age;
    }
    pM = tM / 5;

    printf("Afternoon \n");
    for (int i = 1; i <= 6; i++)
    {
        printf("Age student %i: ", i);
        scanf("%i", &age);
        tT += age;
    }
    pT = tT / 6;

    printf("Night \n");
    for (int i = 1; i <= 11; i++)
    {
        printf("Age student %i: ", i);
        scanf("%i", &age);
        tN += age;
    }
    pN = tN / 11;

    printf("Prom morging: %i \n", pM);
    printf("Prom afternoon: %i \n", pT);
    printf("Prom night: %i \n", pN);

    if (pM < pT && pM < pN)
    {
        printf("Morging lower \n");
    }
    else
    {
        if (pT < pM && pT < pN)
        {
            printf("Afternoon lower \n");
        }
        else
        {
            printf("Night lower \n");
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
    problem5();
    problem6();
    problem7();
    problem8();
    problem9();
    problem10();
    problem11();
    problem12();
    problem13();

    return 0;
}