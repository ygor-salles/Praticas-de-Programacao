/*
13 - Fa�a um programa que preencha um vetor com seis elementos num�ricos inteiros. Calcule e mostre:
� todos os n�meros pares;
�a quantidade de n�meros pares; 
� todos os n�meros �mpares;
� a quantidade de n�meros �mpares. 
*/

#include<stdio.h>

int main ()
{
    int vet[6], i, c1=0, c2=0;

    for (i=0; i<6; i++){
        printf ("Digite num: ");
        scanf ("%d",&vet[i]);
    }

    for (i=0; i<6; i++){
        if (vet[i] % 2 == 0){
            c1++;
            printf ("\nPar: %d",vet[i]);
        }
        else{
            c2++;
            printf ("\nImpar: %d",vet[i]);
        }
    }
    printf ("\n\nA quantidade de numeros pares eh %d e impares eh %d",c1, c2);
    return 0;
}
