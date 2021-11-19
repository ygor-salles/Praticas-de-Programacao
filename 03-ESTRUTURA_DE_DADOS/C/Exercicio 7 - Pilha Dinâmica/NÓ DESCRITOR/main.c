#include <stdio.h>
#include<locale.h>
#include<stdlib.h>
#include "tad.h"

int main()
{
  setlocale(LC_ALL, "Portuguese");
  Pilha *pi;
  Aluno dados_aluno;
  int opcao, x, cont;

  do
  {
    printf("\n\nMenu de op��es");
    printf("\n1 - Criar Pilha");
    printf("\n2 - Empilhar");
    printf("\n3 - Desempilhar");
    printf("\n4 - Tamanho da Pilha");
    printf("\n5 - Verificar se a Pilha est� vazia");
    printf("\n6 - Consulta topo da Pilha");
    printf("\n7 - Imprimir Pilha");
    printf("\n8 - Esvaziar Pilha");
    printf("\n9 - Sair");
    printf("\nOp��o: ");
    scanf("%d", &opcao);
    system("CLS");

    switch(opcao){
      case 1:
        pi = criar_Pilha();
        if(pi != NULL)
          printf("Pilha criada com sucesso!");
        else
          printf("Pilha n�o criada!");
        break;

      case 2:
        printf("\nDigite nome: "); scanf (" %[^\n]",dados_aluno.nome);
        printf("Digite matricula: "); scanf ("%d",&dados_aluno.matricula);
        printf("Digite nota "); scanf ("%f",&dados_aluno.n1);
        x = empilhar(pi, dados_aluno);
        if(x == 1)
          printf("Empilhado com sucesso!");
        break;

      case 3:
        x = desempilhar(pi);
        if(x == 1)
          printf("Desempilhado com sucesso!");
        break;

      case 4:
        cont = tamanho_Pilha(pi);
        printf ("O tamanho da Pilha �: %d",cont);
        break;

      case 5:
        x = Pilha_vazia(pi);
        if (x == 1)
            printf ("Pilha vazia!");
        else
            printf ("A Pilha n�o est� vazia!");
        break;

      case 6:
        x = consulta_topo_Pilha(pi, &dados_aluno);
        if (x == 1){
            printf("\nNome: %s",dados_aluno.nome);
            printf("\nMatricula: %d",dados_aluno.matricula);
            printf("\nNota: %.2f",dados_aluno.n1);
        }
        break;

      case 7:
        x = imprimir_Pilha(pi);
        if (x == 1)
            printf("\nImpress�o realizada com sucesso!");
        break;

      case 8:
        x = esvazia_Pilha(pi);
        break;

       case 9:
        esvazia_Pilha(pi);
        printf("\nFinalizando...\n\n");
        break;
      default:
        printf("\nOp��o inv�lida!\n");
        break;
    }

  }while(opcao != 9);

  return 0;
}
