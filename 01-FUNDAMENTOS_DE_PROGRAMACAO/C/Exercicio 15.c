/*
15 - Escreva um programa que leia uma matriz 5 x 5 de forma randômica e imprima sua
diagonal primária e secundária.
*/

#include <stdio.h>
#include<stdlib.h>

int main ()
{
	int matriz [5][5], n, i, j;

	printf ("Digite o valor de N <= 5: ");
	scanf ("%d",&n);

    if (n<=0 || n>5)
        printf ("\nDados incorretos!\n");

    else{
        printf ("\nMATRIZ GERADA: \n");
        for (i=0;i<n;i++){
            for (j=0;j<n;j++){
                  matriz[i][j] = rand() % 10;
                  printf ("_%d_|", matriz[i][j]);
            }
            printf("\n");
        }
    
        printf ("\nDiagonal Primaria: \n");
        for (i=0;i<n;i++)
            for (j=0;j<n;j++)
                if (j == i)
                    printf ("%d ", matriz[i][j]);

        printf ("\n\nDiagonal Secundaria: \n");
        for (i=0;i<n;i++)
            for (j=0;j<n;j++)
                if (j == (n-1-i))
                    printf ("%d ", matriz[i][j]);
        
	printf ("\n");
    }
    return 0;
}