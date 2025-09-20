#include <stdio.h>

int main()
{
    int pilihan;
    float sisi, r, t, hasil;

    printf("Menu:\n");
    printf("1. Menghitung volume kubus\n");
    printf("2. Menghitung luas lingkaran\n");
    printf("3. Menghitung volume silinder\n");
    printf("Masukkan pilihan: ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1:
        printf("Masukkan panjang sisi kubus: ");
        scanf("%f", &sisi);
        hasil = sisi * sisi * sisi;
        printf("Volume kubus = %g\n", hasil);
        break;
    case 2:
        printf("Masukkan jari-jari lingkaran: ");
        scanf("%f", &r);
        hasil = 3.14 * r * r;
        printf("Luas lingkaran = %g\n", hasil);
        break;
    case 3:
        printf("Masukkan jari-jari silinder: ");
        scanf("%f", &r);
        printf("Masukkan tinggi silinder: ");
        scanf("%f", &t);
        hasil = 3.14 * r * r * t;
        printf("Volume silinder = %g\n", hasil);
        break;
    default:
        printf("Pilihan tidak valid\n");
        break;
    }

    return 0;
}
