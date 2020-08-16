/*
14 - Leia um conjunto de nomes e os armazene em um vetor de forma dinâmica.
Em seguida, leia um nome e verifique se o mesmo faz parte desse vetor.
*/

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<locale.h>

//EM C para um array deve ser definido o seu tamanho máximo
# define MAX 100

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int i, k;
  char teste;
  
  /*Criação do vetor de string realizado de forma dinâmica ou seja criando posições na memória 
  conforme usuário vai inserindo os nomes até o tamanho MAX. (Manipulação de memória, se faz atravé de     ponteiros para alocar na memória) */
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


  printf("\nSeu array de nomes é: \n");
  for(k=0; k<i; k++)
    printf(" '%s',",vetor[k]);


  char nome_busca[50];
  int encontrou=0;
  printf("\nDigite o nome de busca: "); scanf(" %[^\n]",nome_busca);
  for(k=0; k<i; k++)
    if (strcmp(vetor[k],nome_busca)==0){
      printf("\nO nome (%s) está no array de nomes!\n",nome_busca);
      encontrou=1; 
      break;
    }

  if (encontrou == 0)
    printf("\nO nome (%s) NÃO está no array de nomes!\n",nome_busca);

  return 0;
}

//biblioteca locale para acrescentar a pontuação de idiomas diferentes do inglês
//biblioteca stdlib para funções de alocação dinâmica no vetor 'malloc' e 'sizeof'
//biblioteca string para a função de comparação de string 'strcmp'
//biblioteca stdio para funções básicas do programa, leitura, impressão, declaração de variáveis, etc.
