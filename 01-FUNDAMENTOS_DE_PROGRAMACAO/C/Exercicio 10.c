/*
10 - Leia valores num�ricos at� que o valor 0 for digitado. Em seguida,
calcule a m�dia dos valores digitados e informe o usu�rio.
*/


#include<stdio.h>

int main()
{
  float num, soma=0;
  int cont=0;

  printf("\nDigite valores, ser� encerrado quando for digitado zero: \n");
  do{
    scanf("%f",&num);
    soma += num;
    cont++;
  } while(num!=0);

  printf("\nA media dos numeros digitados excluindo o zero eh: %f",(soma/(float)(cont-1)));
  return 0;
}