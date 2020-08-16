/* 
24 - Trocar os valores dos de I e J através da manipulação de ponteiros.
 */

#include<stdio.h>

int main() {
  int *q, *p, temp;
  int i=2,j=3;
  printf ("\nValor de I e J respectivamente: %d %d\n",i, j);

  p = &i; //p recebe o endereço de i
  q = &j;
  temp = *p; //temp recebe o ponteiro de p
  *p= *q; //o ponteiro de p recebe o ponteiro de q 
  *q = temp; //o ponteiro de q recebe o valor de temp
  printf ("\nNovo valor de I e J respectivamente: %d %d\n",i, j);
  
  return 0;
}

