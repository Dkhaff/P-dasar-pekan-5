/*
 * Nama  : [Abdullah kaffi]
 * NIM   : [4124600011]
 * Kelas : [Meka 2A]
 * Praktik: 5 – If Else
 * Tugas : [5]
 * Deskripsi singkat: mencari nilai determinan
 * Tanggal: [16 September 2025]
 */
#include <stdio.h>
#include <math.h>
    int main() {

    int a, b, c; 
    float x1, x2, D;

    printf("persamaan yang akan kamu cari determinannya adalah ax^2 + bx + c = 0\n");
    printf("masukkan nilai variabel a ");
    scanf("%d", &a);
    printf("masukkan nilai variabel b ");
    scanf("%d", &b);
    printf("masukkan nilai variabel c ");
    scanf("%d", &c);

    D = b*b - 4*a*c;

    if(D==0) {
        x1 = -b / (2.0 * a);
    printf("terdapat 2 akar real kembar\n");
    printf("nilai x1 = x2 = %f", x1);   
    }
    else if(D>0){
        x1 = (-b + sqrt(D))/(2*a);
        x2 = (-b-sqrt(D))/(2*a);
        printf("terdapat 2 akar real yang berlainan\n");
        printf("nilai x1 = %f dan nilai x2 = %f", x1, x2);
    }
    else if(D<0) {
        x1 = -b / 2*a + (sqrt(-D) / 2*a); 
        x2 = -b / 2*a - (sqrt(-D) / 2*a);
        printf("terdapat 2 akar imaginir yang lain\n");
        printf("nilai x1 = %.2f dan nilai x2 = %.2f", x1, x2);
    }
    return 0;
    }