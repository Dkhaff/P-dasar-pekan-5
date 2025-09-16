/*
 * Nama  : [Abdullah kaffi]
 * NIM   : [4124600011]
 * Kelas : [Meka 2A]
 * Praktik: 5 – If Else
 * Tugas : [5]
 * Deskripsi singkat: mengonversi angka ke huruf
 * Tanggal: [16 September 2025]
 */
#include <stdio.h>
int main()
{

    int input;
    printf("0 sampai 40 = E\n");
    printf("40 sampai 55 = D\n");
    printf("55 sampai 60 = C\n");
    printf("60 sampai 80 = B\n");
    printf("80 sampai 100 = A\n");
    printf("pilih angka 1-100 untuk menentukan huruf kamu : ");
    scanf("%d", &input);

    if (input <= 40)
    {
        printf("E");
    }
    else if (input <= 55)
    {
        printf("D");
    }
    else if (input <= 60)
    {
        printf("C");
    }
    else if (input <= 80)
    {
        printf("B");
    }
    else if (input <= 100)
    {
        printf("A");
    }
    else
    {
        printf("JANGAN LEBIH DARI 100 BANGG");
    }

    return 0;
}