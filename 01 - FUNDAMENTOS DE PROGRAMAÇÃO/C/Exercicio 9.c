/* 
9 -Suponha que no ano N a população dos EUA seja maior que a brasileira. Sabendo-se que os
Estados Unidos possuem um crescimento anual de 2% na sua população e que o Brasil tem
crescimento anual de 4%, determine o ano em que as duas populações serão iguais (em
quantidade).
*/

#include <stdio.h>

int main ()
{
    float bra=210, eua=327.2;
    int ano=2019;

    printf("O ano é: %d",ano);
    printf ("\n A populacao brasileira eh de: %.1f MI",bra);
    printf ("\n A populacao americana eh de: %.1f MI\n",eua);

    while (eua>bra) {
        bra=bra+(bra*0.04);
        eua=eua+(eua*0.02);
        ano++;
    }
    printf ("\n O ano em que a população brasileira se igulará ou ultrapassará a do EUA será em: %d\n",ano);
    printf("Basil: %f MI \n EUA: %f MI \n",bra, eua);
    return 0;
}
