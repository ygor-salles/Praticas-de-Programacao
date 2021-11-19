#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "tad.h"

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  Lista *li;
  int opcao, num, pos;

  do
  {
    printf("\n\nMenu de op��es");
    printf("\n1 - Criar lista");
    printf("\n2 - Inserir elemento no in�cio");
    printf("\n3 - Inserir elemento no fim");
    printf("\n4 - Inserir elemento ordenado");
    printf("\n5 - IMPRIME LISTA DO INICIO AO FIM");
    printf("\n6 - IMPRIME LISTA DO FIM AO INICIO");
    printf("\n7 - Remove elemento no in�cio");
    printf("\n8 - Remove elemento no fim");
    printf("\n9 - Remove elemento dado");
    printf("\n10 - Buscar n�mero pela posi��o digitada");
    printf("\n11 - Buscar posi��o pelo n�mero digitado");
    printf("\n12 - Tamanho da Lista");
    printf("\n13 - Verifica se a lista est� vazia");
    printf("\n14 - Esvazia Lista");
    printf("\n15 - Sair");
    printf("\nOp��o: ");
    scanf("%d", &opcao);
    system("CLS");

    switch(opcao){
      case 1:
        li = criar_lista();
        if(li != NULL)
          printf("Lista criada com sucesso!");
        else
          printf("Lista n�o criada!");
        break;

      case 2:
        printf("\nElemento a ser inserido: ");
        scanf("%d",&num);
        if(inserir_lista_inicio(li, num) == 1)
          printf("\nInser��o realizada com sucesso!");
        break;

      case 3:
        printf("\nElemento a ser inserido: ");
        scanf("%d",&num);
        if(inserir_lista_fim(li, num) == 1)
          printf("\nInser��o realizada com sucesso!");
        break;

      case 4:
        printf("\nElemento a ser inserido: ");
        scanf("%d",&num);
        if(inserir_lista_ordenada(li, num) == 1)
          printf("\nInser��o realizada com sucesso!");
        break;

      case 5:
        if(imprimir_lista_inicio_ao_fim(li) == 1)
          printf("\nImpress�o realizada com sucesso!");
        break;

      case 6:
        if(imprimir_lista_fim_ao_inicio(li) == 1)
          printf("\nImpress�o realizada com sucesso!");
        break;

      case 7:
        if(remover_elemento_inicio(li) == 1)
          printf("\nRemo��o realizada com sucesso!");
        break;

      case 8:
        if(remover_elemento_fim(li) == 1)
          printf("\nRemo��o realizada com sucesso!");
        break;

      case 9:
        printf("\nN�mero a ser removido: ");
        scanf("%d",&num);
        if(remover_elemento_dado(li, num) == 1)
          printf("\nRemo��o realizada com sucesso!");
        break;

      case 10:
        printf("\nDigite a posi��o: ");
        scanf("%d",&pos);
        if (buscar_lista_posicao(li, pos) == 0)
            printf("\nPosi��o n�o encontrada!");
        else
            printf("\nO n�mero da posi��o %d � %d",pos, buscar_lista_posicao(li, pos));
            printf ("\n\nLista inteira: ");
            imprimir_lista_inicio_ao_fim(li);
        break;

      case 11:
        printf("\nN�mero a ser buscado: ");
        scanf("%d",&num);
        buscar_lista_dado(li, num);
        imprimir_lista_inicio_ao_fim(li);
        break;

      case 12:
          printf("\nO tamanho da lista �: %d",tamanho_lista(li));
        break;

      case 13:
        if(lista_vazia(li) == 1)
            printf("\nLista vazia!");
        else
            printf("\nA lista n�o est� vazia!");
        break;

      case 14:
        if(esvaziar_lista(li) == 1)
          printf("\nLista Esvaziada!");
        break;

      case 15:
        esvaziar_lista(li);
        printf("\nFinalizando...");
        break;
      default:
        printf("\nOp��o inv�lida!");
        break;
    }

  }while(opcao != 15);

  return 0;
}
