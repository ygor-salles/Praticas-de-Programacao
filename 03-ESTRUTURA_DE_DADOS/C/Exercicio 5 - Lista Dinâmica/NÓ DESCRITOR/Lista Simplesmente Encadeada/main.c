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
    printf("\n5 - Imprime Lista");
    printf("\n6 - Remove elemento no in�cio");
    printf("\n7 - Remove elemento no fim");
    printf("\n8 - Remove elemento dado");
    printf("\n9 - Buscar n�mero pela posi��o digitada");
    printf("\n10 - Buscar posi��o pelo n�mero digitado");
    printf("\n11 - Tamanho da Lista");
    printf("\n12 - Verifica se a lista est� vazia");
    printf("\n13 - Esvazia Lista");
    printf("\n14 - Sair");
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
        if(imprimir_lista(li) == 1)
          printf("\nImpress�o realizada com sucesso!");
        break;

      case 6:
        if(remover_elemento_inicio(li) == 1)
          printf("\nRemo��o realizada com sucesso!");
        break;

      case 7:
        if(remover_elemento_fim(li) == 1)
          printf("\nRemo��o realizada com sucesso!");
        break;

      case 8:
        printf("\nN�mero a ser removido: ");
        scanf("%d",&num);
        if(remover_elemento_dado(li, num) == 1)
          printf("\nRemo��o realizada com sucesso!");
        break;

      case 9:
        printf("\nDigite a posi��o: ");
        scanf("%d",&pos);
        if (buscar_lista_posicao(li, pos) == 0)
            printf("\nPosi��o n�o encontrada!");
        else
            printf("\nO n�mero da posi��o %d � %d",pos, buscar_lista_posicao(li, pos));
            printf ("\n\nLista inteira: ");
            imprimir_lista(li);
        break;

      case 10:
        printf("\nN�mero a ser buscado: ");
        scanf("%d",&num);
        buscar_lista_dado(li, num);
        /*if (buscar_lista_dado(li, num) == 0)
            printf("\nN�mero n�o encontrado!");
        else
            printf("\nA posi��o do n�mero %d � %d",num, buscar_lista_dado(li, pos));
            printf ("\n\nLista inteira: ");*/
            imprimir_lista(li);
        break;

      case 11:
          printf("\nO tamanho da lista �: %d",tamanho_lista(li));
        break;

      case 12:
        if(lista_vazia(li) == 1)
            printf("\nLista vazia!");
        else
            printf("\nA lista n�o est� vazia!");
        break;

      case 13:
        if(esvaziar_lista(li) == 1)
          printf("\nLista Esvaziada!");
        break;

      case 14:
        esvaziar_lista(li);
        printf("\nFinalizando...");
        break;
      default:
        printf("\nOp��o inv�lida!");
        break;
    }

  }while(opcao != 14);

  return 0;
}
