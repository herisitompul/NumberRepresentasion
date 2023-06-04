#include <stdio.h>

int main() {
    double a = 5.5;      // Deklarasi variabel a dengan nilai 5.5
    double b = 2.3;      // Deklarasi variabel b dengan nilai 2.3
    double sum, diff, product, quotient;

    // Penjumlahan
    sum = a + b;
    printf("Penjumlahan: %.2lf + %.2lf = %.2lf\n", a, b, sum);

    // Pengurangan
    diff = a - b;
    printf("Pengurangan: %.2lf - %.2lf = %.2lf\n", a, b, diff);

    // Perkalian
    product = a * b;
    printf("Perkalian: %.2lf * %.2lf = %.2lf\n", a, b, product);

    // Pembagian
    quotient = a / b;
    printf("Pembagian: %.2lf / %.2lf = %.2lf\n", a, b, quotient);

    return 0;
}
