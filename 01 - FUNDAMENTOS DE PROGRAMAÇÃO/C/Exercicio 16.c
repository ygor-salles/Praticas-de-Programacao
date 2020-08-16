/*
16 - Escreva um programa que recebe uma cadeia de caracteres verifica se esta cadeia é um palíndromo.
Uma palavra é dita ser palíndromo se a sequência de seus caracteres da esquerda para a direita é
igual à sequência de seus caracteres da direita para a esquerda. Ex.: arara.
*/

#include <stdio.h>
#include <string.h>

int palindromo(int x, char string1[])
{
  char string2[101];
  for (int i=0; i<x; i++)
	string2[i]=string1[x-i-1];
  string2[x]= '\0';
  printf ("Palavra inversa: %s\n", string2);

  if (strcmp(string1,string2)==0)
    return 1;
  else
    return 0;
}

int main (){
  char string1[101];
  int x, resultado;

  printf ("Entre com a cadeia de carater: \n");
  scanf (" %[^\n]", string1);
  x = strlen (string1);

  resultado = palindromo(x, string1);
  if (resultado==1)
    printf("\nEH PALINDROMO\n\n");
  else
    printf("\nNao eh palindromo\n\n");
    
  return 0;
}
