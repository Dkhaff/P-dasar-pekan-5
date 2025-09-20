#include <stdio.h>
int main()
{

    int valid_operator = 1;
    char operator;
    float nomer1, nomer2, hasil;
    printf("input 2 bilangan dan operator\n");
    printf("dengan format bil 1, operator, bil 2 :\n");
    scanf("%f %c %f", &nomer1, &operator, &nomer2);

    switch (operator)
    {
    case '+':
        hasil = nomer1 + nomer2;
        break;

    case '-':
        hasil = nomer1 - nomer2;
        break;

    case '*':
        hasil = nomer1 * nomer2;
        break;

    case '/':
        hasil = nomer1 / nomer2;
        break;
    default:
        valid_operator = 0;
        break;
    }

    if (valid_operator = 1)
    {
        printf("%.0f %c %.0f = %.3f", nomer1, operator, nomer2, hasil);
    }
    else
    {
        printf("input salah");
    }

    return 0;
}