#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "tad.h"

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  ArvoreBin *raiz;
  int opcao, valor, ok;

  do
  {
    printf("\n\nMenu de op��es");
    printf("\n1 - Criar �rvore bin�ria");
    printf("\n2 - Liberar �rvore bin�ria");
    printf("\n3 - Inserir n� na �rvore bin�ria");
    printf("\n4 - Remover n� da �rvore bin�ria");
    printf("\n5 - Consultar n� na �rvore bin�ria");
    printf("\n6 - Percurso pr�-ordem");
    printf("\n7 - Percurso em-ordem");
    printf("\n8 - Percurso p�s-ordem");
    printf("\n9 - Altura da �rvore bin�ria");
    printf("\n10 - Total de n�s");
    printf("\n11 - Sair");
    printf("\nOp��o: ");
    scanf("%d", &opcao);
    system("CLS");

    switch(opcao){
      case 1:
        raiz = criar_arvore_binaria();
        if(raiz != NULL)
          printf("\n �rvore criada com sucesso!");
        else
          printf("\n �rvore n�o criada!");
        break;

      case 2:
        ok = liberar_arvore_binaria(raiz);
        if(ok)
          printf("\n �rvore liberada com sucesso!");
        else
          printf("\n �rvore n�o liberada!");
        break;

      case 3:
        printf("\n Valor a ser inserido: ");
        scanf("%d", &valor);
        ok = inserir_arvore_binaria(raiz, valor);
        if(ok == 1)
          printf("\n Inser��o realizada com sucesso!");
        else
          printf("\n Falha na inser��o!");
        break;

      case 4:
        printf("\n Valor a ser removido: ");
        scanf("%d", &valor);
        ok = remover_arvore_binaria(raiz, valor);
        if(ok == 1)
          printf("\n Remo��o realizada com sucesso!");
        else
          printf("\n Falha na remo��o!");
        break;

      case 5:
        printf("\n Valor a ser buscado: ");
        scanf("%d", &valor);
        ok = consultar_arvore_binaria(raiz, valor);
        if(ok == 1)
          printf("\n Busca realizada com sucesso!");
        else
          printf("\n Valor n�o encontrado na �rvore!");
        break;

      case 6:
        percorrer_pre_ordem_arvore_binaria(raiz);
        break;

      case 7:
        percorrer_em_ordem_arvore_binaria(raiz);
        break;

      case 8:
        percorrer_pos_ordem_arvore_binaria(raiz);
        break;

      case 9:
        printf("%d\n", altura_arvore_binaria(raiz));
        break;

        break;

      case 10:
        printf("%d\n", quantidade_nos_arvore_binaria(raiz));
        break;

      case 11:
        liberar_arvore_binaria(raiz);
        printf("\nFinalizando...");
        break;
        
      default:
        printf("\nOp��o inv�lida!");
        break;
    }
  
  }while(opcao != 11);

  return 0;
}
