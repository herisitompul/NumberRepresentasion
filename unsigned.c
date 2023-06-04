#include <stdio.h>

int main() {
    unsigned int a = 10;        // Deklarasi variabel a dengan tipe data unsigned int
    unsigned int b = 5;         // Deklarasi variabel b dengan tipe data unsigned int
    unsigned int sum, diff;     // Deklarasi variabel sum dan diff dengan tipe data unsigned int

    // Penjumlahan
    sum = a + b;
    printf("Penjumlahan: %u + %u = %u\n", a, b, sum);

    // Pengurangan
    if (a >= b) {
        diff = a - b;
        printf("Pengurangan: %u - %u = %u\n", a, b, diff);
    } else {
        printf("Tidak bisa. Nilai b lebih besar dari a.\n");
    }

    return 0;
}
