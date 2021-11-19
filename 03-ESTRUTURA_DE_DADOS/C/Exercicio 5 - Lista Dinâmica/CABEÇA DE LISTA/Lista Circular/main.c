#include <stdio.h>
#include<locale.h>
#include "listade.h"

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  Lista *li = NULL;
  Produto *produto;
  int opcao, dado, ok, pos;

  do
  {
    printf("\n\nMenu de op��es");
    printf("\n1 - Criar lista");
    printf("\n2 - Liberar lista");
    printf("\n3 - Inserir elemento no in�cio");
    printf("\n4 - Inserir elemento no final");
    printf("\n5 - Inserir elemento (ordenado)");
    printf("\n6 - Remover elemento do in�cio");
    printf("\n7 - Remover elemento do final");
    printf("\n8 - Remover elemento (qualquer)");
    printf("\n9 - Buscar elemento pela posi��o");
    printf("\n10 - Buscar elemento pelo dado");
    printf("\n11 - Imprimir lista");
    printf("\n12 - Sair");
    printf("\nOp��o: ");
    scanf("%d", &opcao);
    system("CLS");

    switch(opcao){
      case 1:
        li = criar_lista();

        if(li != NULL){
          printf("\n Lista criada com sucesso!");
        }else{
          printf("\n Lista n�o criada!");
        }
        break;

      case 2:
        ok = liberar_lista(li);
        if(ok)
          printf("\n Lista liberada com sucesso!");
        else
          printf("\n Lista n�o liberada!");
        break;

      case 3:
        ok = criar_produto(&produto);
        ok = inserir_lista_inicio(li, produto);
        if(ok == 1)
          printf("\n Inser��o realizada com sucesso!");
        else
          printf("\n Falha na inser��o!");
        break;

      case 4:
        ok = criar_produto(&produto);
        ok = inserir_lista_final(li, produto);
        if(ok == 1)
          printf("\n Inser��o realizada com sucesso!");
        else
          printf("\n Falha na inser��o!");
        break;

      case 5:
        ok = criar_produto(&produto);
        ok = inserir_lista_ordenada(li, produto);
        if(ok == 1)
          printf("\n Inser��o realizada com sucesso!");
        else
          printf("\n Falha na inser��o!");
        break;

      case 6:
        ok = remover_lista_inicio(li);
        if(ok == 1)
          printf("\n Remo��o realizada com sucesso!");
        else
          printf("\n Falha na remo��o!");
        break;

      case 7:
        ok = remover_lista_final(li);
        if(ok == 1)
          printf("\n Remo��o realizada com sucesso!");
        else
          printf("\n Falha na remo��o!");
        break;

      case 8:
        printf("\n C�digo do produto a ser removido: ");
        scanf("%d", &dado);
        ok = remover_lista_meio(li, dado);
        if(ok == 1)
          printf("\n Remo��o realizada com sucesso!");
        else
          printf("\n Falha na remo��o!");
        break;


      case 9:
        printf("\n Posi��o do elemento a ser buscado: ");
        scanf("%d", &pos);
        produto = buscar_lista_posicao(li, pos);
        if(produto != NULL){
          printf("\n Busca realizada com sucesso!");
          printf("\n Elemento da %d� posi��o: ", pos);
          imprimir_produto(produto);
        }else
          printf("\n Posi��o n�o existe!");
        break;

      case 10:
        printf("\n C�digo do produto a ser buscado: ");
        scanf("%d", &dado);
        produto = buscar_lista_dado(li, dado);
        if(produto != NULL){
          printf("\n Busca realizada com sucesso!");
          printf("\n Elemento com c�digo %d na lista: ", dado);
          imprimir_produto(produto);
        }else
          printf("\n Elemento n�o encontrado!");
        break;

      case 11:
        printf("\n Lista encadeada circular: ");
        ok = imprimir_lista(li);
        break;

      case 12:
        liberar_lista(li);
        printf("\nFinalizando...");
        break;
      default:
        printf("\nOp��o inv�lida!");
        break;
    }

  }while(opcao != 12);

  return 0;
}