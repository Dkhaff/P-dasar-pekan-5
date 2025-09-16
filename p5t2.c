/*
 * Nama  : [Abdullah kaffi]
 * NIM   : [4124600011]
 * Kelas : [Meka 2A]
 * Praktik: 5 – If Else
 * Tugas : [5]
 * Deskripsi singkat: memproses 2 bilangan
 * Tanggal: [16 September 2025]
 */
#include <stdio.h>
int main()
{

    float bilangan1, bilangan2, x;
    int input;
    printf("kami akan memproses dua bilangan yang kamu masukkan\n");
    printf("masukkan bilangan pertama : ");
    scanf("%f", &bilangan1);
    printf("masukkan bilangan kedua : ");
    scanf("%f", &bilangan2);
    printf("tolong pilih operator dibawah\n");
    printf("1. pemjumlahan\n");
    printf("2. pengurangan\n");
    printf("3. pembagian\n");
    printf("4. perkalian\n");
    printf("tolong isi pilihan kamu : ");
    scanf("%d", &input);

    if (input == 1)
    {
        printf("%.0f + %.0f = %.0f", bilangan1, bilangan2, bilangan1 + bilangan2);
    }
    if (input == 2)
    {
        printf("%.0f - %.0f = %.0f", bilangan1, bilangan2, bilangan1 - bilangan2);
    }
    if (input = 3)
    {
        printf("%.0f / %.0f = %.2f", bilangan1, bilangan2, bilangan1 / bilangan2);
    }
    if (input == 4)
    {
        printf("%.0f * %.0f = %.0f", bilangan1, bilangan2, bilangan1 * bilangan2);
    }

    return 0;
}