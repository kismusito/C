#include<stdio.h>

int problem1() {
    int num1 , num2 , suma , producto;

    printf("Num 1: ");
    scanf("%i" , &num1);
    printf("Num 2: ");
    scanf("%i" , &num2);

    suma = num1 + num2;
    producto = num1 * num2;

    printf("Suma: %i" , suma);
    printf("\n");
    printf("Producto: %i" , producto);

    return 0;
}

int problem2() {
    float side , result;
    printf("Type the side: ");
    scanf("%f" , &side);

    result = side * 4;

    printf("The perimeter is: %.2f" , result);
    return 0;
}

int problem3() {
    float n1 , n2 , n3 , n4;

    printf("Num 1: ");
    scanf("%f" , &n1);
    printf("Num 2: ");
    scanf("%f" , &n2);
    printf("Num 3: ");
    scanf("%f" , &n3);
    printf("Num 4: ");
    scanf("%f" , &n4);

    printf("Sum: %.2f" , (n1+n2));
    printf("\n");
    printf("Product: %.2f" , (n3*n4));

    return 0;
}

int problem4() {
    float n1 , n2 , n3 , n4 , sum , prom;

    printf("Num 1: ");
    scanf("%f" , &n1);
    printf("Num 2: ");
    scanf("%f" , &n2);
    printf("Num 3: ");
    scanf("%f" , &n3);
    printf("Num 4: ");
    scanf("%f" , &n4);

    sum = n1 + n2 + n3 + n4;
    prom = sum / 4;

    printf("The sum is: %.2f" , sum);
    printf("\n");
    printf("The prom is: %.2f" , prom);
    
    return 0;
}

int problem5() {
    float price , total;
    int nByClient;

    printf("Product price: ");
    scanf("%f" , &price);

    printf("Cuantity: ");
    scanf("%i" , &nByClient);

    total = price * nByClient;

    printf("Your must pay: %.2f" , total);

    return 0;
}

int main() {
    
    problem1();
    problem2();
    problem3();
    problem4();
    problem5();

    return 0;
}