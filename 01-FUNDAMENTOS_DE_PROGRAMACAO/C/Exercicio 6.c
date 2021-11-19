/*
6 - Elabore um programa que leia dois números n e m (m>=n) e escreva todos os números
pares entre n e m.
*/

#include <stdio.h>

int main ()
{
    int n, m, i;
    printf ("Digite valor do ponto de origem: ");
    scanf ("%d",&n);
    printf ("Digite valor do ponto de destino: ");
    scanf ("%d",&m);
    if (m>=n){
      printf("\nTodos os pares dentro do intervalo(inclusive): \n");
      for (i=n; i<=m; i++)
          if (i%2==0) 
              printf ("\n %d\n",i);
    }
    else
      printf("\nPonto de destino deve ser maior que ponto de origem\n");
    
    return 0;
}