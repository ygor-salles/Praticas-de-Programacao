#include <stdio.h>
#include "listade.h"

int main(void) 
{
  Lista *li;
  int opcao, dado;
  
  do
  {
    printf("\n\nMenu de op��es");
    printf("\n1 - Criar lista");
    printf("\n2 - Liberar lista");
    printf("\n3 - Inserir elemento no in�cio");
    printf("\n4 - Remover elemento do in�cio");
    printf("\n5 - Sair");
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
        liberar_lista(li);
        break;

      case 3:
        printf("\nElemento a ser inserido: ");
        scanf("%d", &dado);
        if(inserir_lista_inicio(li, dado) == 1)
          printf("Inser��o realizada com sucesso!");
        break;

      case 4:        
        if(remover_lista_inicio(li) == 1)
          printf("Remo��o realizada com sucesso!");
        break;

      case 5:
        liberar_lista(li);
        printf("\nFinalizando...");
        break;
      default: 
        printf("\nOp��o inv�lida!");
        break;
    }

  }while(opcao != 5);

  return 0;
}