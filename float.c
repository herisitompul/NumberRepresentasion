#include <stdio.h>

int main() {
    float a = 5.5;      // Deklarasi variabel a dengan nilai 5.5
    float b = 2.3;      // Deklarasi variabel b dengan nilai 2.3
    float sum, diff, product, quotient;

    // Penjumlahan
    sum = a + b;
    printf("Penjumlahan: %.2f + %.2f = %.2f\n", a, b, sum);

    // Pengurangan
    diff = a - b;
    printf("Pengurangan: %.2f - %.2f = %.2f\n", a, b, diff);

    // Perkalian
    product = a * b;
    printf("Perkalian: %.2f * %.2f = %.2f\n", a, b, product);

    // Pembagian
    quotient = a / b;
    printf("Pembagian: %.2f / %.2f = %.2f\n", a, b, quotient);

    return 0;
}
