#include <stdio.h>
int main()
{

    char letter;
    int sum = -1;
    int valid_flag = 0;

    printf("masukkan pilih salah satu huruf ini (X, Z, A) : ");
    scanf(" %c", &letter);

    switch (letter)
    {
    case 'X':
        sum = 0;
        break;

    case 'Z':
        valid_flag = 1;
        break;

    case 'A':
        sum = 1;
        break;

    default:
        printf("tidak diketahui\n", letter);
        break;
    }

    printf("sum = %d, valid_flag = %d", sum, valid_flag);
    return 0;
}