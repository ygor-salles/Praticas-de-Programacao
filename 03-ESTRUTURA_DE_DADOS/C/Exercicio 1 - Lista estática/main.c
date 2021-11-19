#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "tad.h"

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  Lista *li;
  struct aluno al;
  int opcao, mat, pos, x;

  do
  {
    printf("\n\nMenu de op��es");
    printf("\n1 - Criar lista");
    printf("\n2 - Tamanho da lista");
    printf("\n3 - Verificar se a lista est� cheia");
    printf("\n4 - Verificar se a lista est� vazia");
    printf("\n5 - Liberar lista");
    printf("\n6 - Inserir lista Final");
    printf("\n7 - Inserir lista Incio");
    printf("\n8 - Inserir lista de forma Ordenada");
    printf("\n9 - Remover lista Final");
    printf("\n10 - Remover lista Inicio");
    printf("\n11 - Remover lista de forma Ordenada");
    printf("\n12 - Consultar Lista pela posi��o");
    printf("\n13 - Consultar Lista pela matr�cula");
    printf("\n14 - Imprime Lista");
    printf("\n15 - Sair");
    printf("\nOp��o: ");
    scanf("%d", &opcao);
    system("CLS");

    switch(opcao){
      case 1:
        li = cria_lista();
        if(li != NULL) printf("Lista criada com sucesso!");
        else printf("Lista n�o criada!");
        break;

      case 2:
        printf("O tamanho da lista �: %d",tamanho_lista(li));
        break;

      case 3:
        x=lista_cheia(li);
        if(x == 1) printf("\nLista cheia!");
        else printf("\nLista n�o est� cheia");
        break;

      case 4:
        x=lista_vazia(li);
        if(x == 1) printf("\nLista vazia!");
        else printf("\nLista n�o est� vazia");
        break;

      case 5:
        libera_lista(li);
        printf("\nLista esvaziada com sucesso");
        break;

      case 6:
        printf("\nDigite a matricula: "); scanf("%d",&al.matricula);
        printf("\nDigite o nome: "); scanf(" %[^\n]",al.nome);
        printf("\nDigite as notas: \n"); scanf("%f %f %f",&al.n1, &al.n2, &al.n3);

        if(insere_lista_final(li, al) == 1) printf("\nInser��o realizada com sucesso!");
        else printf("\nImposs�vel inserir, Lista Est�tica totalmente preenchida ou espa�o insuficiente em disco");
        break;

      case 7:
        printf("\nDigite a matricula: "); scanf("%d",&al.matricula);
        printf("\nDigite o nome: "); scanf(" %[^\n]",al.nome);
        printf("\nDigite as notas: "); scanf("%f %f %f",&al.n1, &al.n2, &al.n3);

        if(insere_lista_inicio(li, al) == 1) printf("\nInser��o realizada com sucesso!");
        else printf("\nImposs�vel inserir, Lista Est�tica totalmente preenchida ou espa�o insuficiente em disco");
        break;

      case 8:
        printf("\nDigite a matricula: "); scanf("%d",&al.matricula);
        printf("\nDigite o nome: "); scanf(" %[^\n]",al.nome);
        printf("\nDigite as notas: "); scanf("%f %f %f",&al.n1, &al.n2, &al.n3);

        if(insere_lista_ordenada(li, al) == 1) printf("\nInser��o realizada com sucesso!");
        else printf("\nImposs�vel inserir, Lista Est�tica totalmente preenchida ou espa�o insuficiente em disco");
        break;

      case 9:
        if(remove_lista_final(li) == 1) printf("\nRemo��o realizada com sucesso!");
        else printf("\nElemento n�o encontrado!");
        break;

      case 10:
        if(remove_lista_inicio(li) == 1) printf("\nRemo��o realizada com sucesso!");
        else printf("\nElemento n�o encontrado!");
        break;

      case 11:
        printf("\nDigite o n�mero de matr�cula a ser removido: "); scanf("%d",&mat);
        if(remove_lista_ordenada(li, mat) == 1) printf("\nRemo��o realizada com sucesso!");
        else printf("\nElemento n�o encontrado!");
        break;

      case 12:
        printf("\nDigite a posi��o a ser consultada: "); scanf("%d",&pos);
        if(consulta_lista_pos(li, pos, &al) == 1){
            printf("\nMatricula: %d",al.matricula);
            printf("\nNome: %s",al.nome);
            printf("\nNotas: %.2f | %.2f | %.2f",al.n1, al.n2, al.n3);
        }
        else printf("\nElemento n�o encontrado!");
        break;

      case 13:
        printf("\nDigite a posi��o a ser consultada: "); scanf("%d",&pos);
        if(consulta_lista_mat(li, mat, &al) == 1){
            printf("\nMatricula: %d",al.matricula);
            printf("\nNome: %s",al.nome);
            printf("\nNotas: %.2f | %.2f | %.2f",al.n1, al.n2, al.n3);
        }
        else printf("\nElemento n�o encontrado!");
        break;
        
      case 14:
        x = imprime_lista(li);
        if(x == 0) printf("\nLista est� vazia!");
        break;

      case 15:
        libera_lista(li);
        printf("\nFinalizando...");
        break;

      default:
        printf("\nOp��o inv�lida!");
        break;
    }

  }while(opcao != 15);

  return 0;
}
