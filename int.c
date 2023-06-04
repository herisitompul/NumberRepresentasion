#include <stdio.h>

int main() {
    int a = 5;      // Deklarasi variabel a dengan nilai 5
    int b = 3;      // Deklarasi variabel b dengan nilai 3
    int sum, diff, product, quotient, remainder;

    // Penjumlahan
    sum = a + b;
    printf("Penjumlahan: %d + %d = %d\n", a, b, sum);

    // Pengurangan
    diff = a - b;
    printf("Pengurangan: %d - %d = %d\n", a, b, diff);

    // Perkalian
    product = a * b;
    printf("Perkalian: %d * %d = %d\n", a, b, product);

    // Pembagian
    quotient = a / b;
    printf("Pembagian: %d / %d = %d\n", a, b, quotient);

    // Sisa Pembagian (Modulo)
    remainder = a % b;
    printf("Sisa Bagi: %d %% %d = %d\n", a, b, remainder);

    return 0;
}
