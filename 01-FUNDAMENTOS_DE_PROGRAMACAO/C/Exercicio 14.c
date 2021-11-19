/*
14 - Leia um conjunto de nomes e os armazene em um vetor de forma din�mica.
Em seguida, leia um nome e verifique se o mesmo faz parte desse vetor.
*/

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<locale.h>

//EM C para um array deve ser definido o seu tamanho m�ximo
# define MAX 100

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int i, k;
  char teste;
  
  /*Cria��o do vetor de string realizado de forma din�mica ou seja criando posi��es na mem�ria 
  conforme usu�rio vai inserindo os nomes at� o tamanho MAX. (Manipula��o de mem�ria, se faz atrav� de     ponteiros para alocar na mem�ria) */
  //Em liguagem C seria uma matriz de caracteres = Vetor de Strings.
  char **vetor = (char**) malloc(MAX * sizeof(char*));
  for(i=0; i<50; i++)
    vetor[i] = (char*) malloc((50-i) * sizeof(char));

  i=0;
  do{
    printf("Digite nome: ");
    scanf(" %[^\n]",vetor[i]);

    do{
      printf("Deseja continuar alocando nomes no array? [S/N] ");
      scanf(" %c",&teste);
    }while(teste!='s' && teste!='S' && teste!='n' && teste!='N');

    i++;
    if(i==99) break;
  } while(teste=='S' || teste=='s');


  printf("\nSeu array de nomes �: \n");
  for(k=0; k<i; k++)
    printf(" '%s',",vetor[k]);


  char nome_busca[50];
  int encontrou=0;
  printf("\nDigite o nome de busca: "); scanf(" %[^\n]",nome_busca);
  for(k=0; k<i; k++)
    if (strcmp(vetor[k],nome_busca)==0){
      printf("\nO nome (%s) est� no array de nomes!\n",nome_busca);
      encontrou=1; 
      break;
    }

  if (encontrou == 0)
    printf("\nO nome (%s) N�O est� no array de nomes!\n",nome_busca);

  return 0;
}

//biblioteca locale para acrescentar a pontua��o de idiomas diferentes do ingl�s
//biblioteca stdlib para fun��es de aloca��o din�mica no vetor 'malloc' e 'sizeof'
//biblioteca string para a fun��o de compara��o de string 'strcmp'
//biblioteca stdio para fun��es b�sicas do programa, leitura, impress�o, declara��o de vari�veis, etc.
