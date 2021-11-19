// TAD para Lista Din�mica Encadeada Circular

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include "listade.h"

struct produto{
  int codigo;
  char descricao[30];
  float preco;
  int qtd;
};

struct elemento{
  Produto *produto;
  struct elemento *prox;
};

typedef struct elemento Elemento;
typedef Elemento* Lista;


int imprimir_produto(Produto *produto)
{
  printf("\n\n   C�digo: %d", produto->codigo);
  printf("\n   Descri��o: %s", produto->descricao);
  printf("\n   Pre�o: %.2f", produto->preco);
  printf("\n   Quantidade: %d", produto->qtd);

  return 1;
}

/****************************************************************************/
int criar_produto(Produto **produto)
{
  *produto = (Produto*) malloc(sizeof(Produto));

  printf("\n C�digo: ");
  scanf("%d", &(*produto)->codigo);

  printf(" Descri��o: ");
  scanf(" %[^\n]", (*produto)->descricao);

  printf(" Pre�o: ");
  scanf("%f", &(*produto)->preco);

  printf(" Quantidade: ");
  scanf("%d", &(*produto)->qtd);

  return 1;
}

/****************************************************************************/
Lista* criar_lista()
{
  Lista *li = (Lista*) malloc(sizeof(Lista));

  if(li != NULL){
    *li = NULL;
  }else{
    return NULL;
  }

  return li;
}

/****************************************************************************/
int liberar_lista(Lista *li)
{
  if(li == NULL){
    return 0;
  }

  if((*li) != NULL){
    Elemento *no, *aux;
    no = *li;

    while( no->prox !=  (*li) ){
      aux = no;
      no = no-> prox;
      free(aux);
    }
    free(no);

    free(li);
  }

  return 1;
}

/****************************************************************************/
int tamanho_lista(Lista *li)
{
  if(li == NULL || (*li) == NULL){
    return 0;
  }

  int cont = 0;

  Elemento *no;
  no = *li;

  do{
    cont++;
    no = no->prox;
  }while(no != (*li));

  return cont;
}

/****************************************************************************/
int lista_vazia(Lista *li)
{
  if(li == NULL)
    return -1;

  if(*li == NULL)
    return 1;

  return 0;
}

/****************************************************************************/
Elemento* criar_elemento()
{
  Elemento *no = (Elemento*) malloc(sizeof(Elemento));

  if(no == NULL)
    return 0;

  return no;
}

/****************************************************************************/
int inserir_lista_inicio(Lista *li, Produto *produto)
{
  if(li == NULL){
    return 0;
  }

  Elemento *no;
  no = criar_elemento();

  no->produto = produto;

  if((*li) == NULL){
    no->prox = no;
    *li = no;
  }else{
    Elemento *aux;
    aux = *li;

    while(aux->prox != (*li)){
      aux = aux->prox;
    }
    aux->prox = no;
    no->prox = *li;
    *li = no;
  }

  return 1;
}

/****************************************************************************/
int inserir_lista_final(Lista *li, Produto *produto)
{
  if(li == NULL){
    return 0;
  }

  Elemento *no;
  no = criar_elemento();

  no->produto = produto;

  if( (*li) == NULL ){
    no->prox = no;
    *li = no;
  }else{
    Elemento *aux;
    aux = *li;
    while(aux->prox != (*li)){
      aux = aux->prox;
    }

    aux->prox = no;
    no->prox = *li;
  }

  return 1;
}

/****************************************************************************/
int inserir_lista_ordenada(Lista *li, Produto *produto)
{
  if(li == NULL){
    return 0;
  }

  Elemento *no;
  no = criar_elemento();

  no->produto = produto;

  if( (*li) == NULL ){
    no->prox = no;
    *li = no;
  }else{
    if((*li)->produto->codigo > produto->codigo){
      Elemento *aux;
      aux = *li;
      while(aux->prox != (*li)){
        aux = aux->prox;
      }

      aux->prox = no;
      no->prox = *li;
      *li = no;
    }

    Elemento *anterior, *atual;

    anterior = *li;
    atual = anterior->prox;

    while(atual != (*li) && atual->produto->codigo < produto->codigo){
      anterior = atual;
      atual = atual->prox;
    }

    anterior->prox = no;
    no->prox = atual;
  }

  return 1;
}

/****************************************************************************/
int remover_lista_inicio(Lista *li)
{
  if(li == NULL)
    return 0;

  if((*li) == NULL)
    return 0;

  if ((*li)->prox == (*li)){
    free(*li);
    *li = NULL;
    return 1;
  }

  Elemento *no, *aux;
  no = *li;
  aux = *li;

  while(aux->prox != (*li)){
    aux = aux->prox;
  }

  aux->prox = no->prox;
  *li = no->prox;

  free(no);

  return 1;
}

/****************************************************************************/
int remover_lista_final(Lista *li)
{
  if(li == NULL)
    return 0;

  if((*li) == NULL)
    return 0;

  if ((*li)->prox == (*li)){
    free(*li);
    *li = NULL;
    return 1;
  }

  Elemento *anterior, *no;
  no = *li;

  while(no->prox != (*li)){
    anterior = no;
    no = no->prox;
  }
  anterior->prox = no->prox;
  free(no);

  return 1;
}

/****************************************************************************/
int remover_lista_meio(Lista *li, int codigo)
{
  if(li == NULL)
    return 0;

  if((*li) == NULL)
    return 0;

  Elemento *no;
  no = *li;

  if(no->produto->codigo == codigo){
    if (no->prox == no){
      *li = NULL;
      free(no);
      return 1;
    }
    else{
      Elemento *ultimo;
      ultimo = *li;

      while(ultimo->prox != (*li))
        ultimo = ultimo->prox;

      ultimo->prox = no->prox;
      *li = no->prox;
      free(no);

      return 1;
    }
  }

  Elemento *anterior;
  anterior = no;
  no = no->prox;

  while(no != (*li) && no->produto->codigo != codigo){
    anterior = no;
    no = no->prox;
  }

  if(no == (*li))
    return 0;

  anterior->prox = no->prox;

  free(no);

  return 1;
}

/****************************************************************************/
Produto *buscar_lista_posicao(Lista *li, int pos)
{
  if(li == NULL || (*li) == NULL || pos <= 0)
    return NULL;

  int i = 1;
  Elemento *no;
  no = *li;

  while( no->prox != (*li) && i < pos){
    no = no->prox;
    i++;
  }

  if(i != pos)
    return NULL;

  return no->produto;
}

/****************************************************************************/
Produto *buscar_lista_dado(Lista *li, int codigo)
{
  if(li == NULL || (*li) == NULL)
    return NULL;

  int i = 1;
  Elemento *no;
  no = *li;

  while( no->prox != (*li) && no->produto->codigo != codigo){
    no = no->prox;
    i++;
  }

  if(no->produto->codigo != codigo)
    return NULL;

  return no->produto;
}

/****************************************************************************/
int imprimir_lista(Lista *li)
{
  if(li == NULL)
    return 0;

  if((*li) == NULL)
    printf(" Lista vazia!");

  Elemento *no;
  no = (*li);

  while(no->prox != (*li)){
    imprimir_produto(no->produto);
    no = no->prox;
  }

  imprimir_produto(no->produto);

  return 1;
}
