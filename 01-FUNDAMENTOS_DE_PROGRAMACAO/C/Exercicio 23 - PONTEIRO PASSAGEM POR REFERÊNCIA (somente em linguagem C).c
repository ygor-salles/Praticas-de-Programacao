/*
23 - Fa�a uma fun��o que receba um par�metro (inteiro por valor) com o total de minutos
passados ao longo do dia e receba tamb�m dois par�metros (inteiros por refer�ncia) no
qual deve preencher com o valor da hora e do minuto corrente. Fa�a um programa que
leia do teclado quantos minutos se passaram desde meia-noite e imprima a hora
corrente (use a sua fun��o). 
*/

#include<stdio.h>


void horario (int x, int *horaC, int *minutoC)
{
    *horaC = x/60;
    *minutoC = x%60;
    return ;
}

int main ()
{
    int minuto, horaC, minutoC;
    printf ("Digite quantos minutos se passaram desde a meia noite: ");
    scanf ("%d",&minuto);

    horario (minuto, &horaC, &minutoC);
    printf ("\nO horario corrente eh %d:%d hr.\n\n",horaC, minutoC);
    return 0;

}