/*
2 - Dado um n�mero inteiro positivo de 3 algarismos, inverter a ordem de seus
algarismos. Os tr�s algarismos do n�mero dado s�o diferentes de zero. 
*/

#include<stdio.h>

int main ()
{
    int num, un, dez, cent;
    printf ("Digite num: ");
    scanf ("%d",&num);

    cent = num/100;
    dez = (num%100)/10;
    un = (num%100)%10;

    printf ("\n%d%d%d\n",un, dez, cent);

    return 0;
}
