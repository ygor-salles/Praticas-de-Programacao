
/*
7 - Elabore um programa em C para calcular e escrever a seguinte soma:
    37 * 38       36 * 37      35 * 36            1 * 2
S = ---------- + --------- + ---------- + ..... + ------
        1           2           3                   37      
*/

#include<stdio.h>

int main ()
{
    float soma=0;
    int den, num1=37, num2=38;

    for (den=1; den<=37; den++){
        soma += ((num1*num2)/(float)den);
        num1--;
        num2--;
    }
    printf ("\n\n A soma eh: %.2f\n\n",soma);
    return 0;
}
