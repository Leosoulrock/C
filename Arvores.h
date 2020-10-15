#include <stdlib.h>
#include <stdio.h>

//Ãrvore BinÃ¡ria
typedef struct AB
{
    int info;
    struct AB *esq, *dir;
}TAB;

TAB *inicializar(){
    return NULL;
}

int vazia(TAB *a){
    return (a == NULL);
}

TAB *criar(int r, TAB *e,TAB *d)
{
    TAB *novo = (TAB *)malloc(sizeof(TAB));
    novo->info = r;
    novo->esq = e;
    novo->dir = d;
    return novo;
}

void imprimir(TAB *a){
    printf("<");
    if(!vazia (a)){
        printf("%d",a->info);
        if ((!vazia(a->esq)) || (!vazia(a->dir))){
            imprimir (a->esq);
            imprimir (a->dir);
        }
    }
printf(" >");
}

int igual (TAB *a1, TAB *a2){
    if((a1->dir)==(a2->dir) && (a1->esq)==(a2->esq) && (a1->info)==(a2->info)){
        return 1;
    }
    else{
        return 0;
    }    
}

TAB *inserir(TAB *a, int elem)
{
  if (!a)
  {
    TAB *novo = (TAB *)malloc(sizeof(TAB));
    novo->info = elem;
    // novo->esq = novo->dir = NULL;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
  }
  if (a->info == elem)
  {
    return a;
  }
  if (a->info > elem)
  {
    a->esq = inserir(a->esq, elem);
  }
  else
  {
    a->dir = inserir(a->dir, elem);
  }
  return a;
}
  
TAB* copia (TAB *a){
  
   TAB *b=inicializar();
   if(vazia(a))
   return b;
   
    b=inserir(b,a->info);
    b->esq=copia(a->esq);
    b->dir=copia(a->dir);
    return b;
}

int conta_pais_um_filho(TAB *a){
  if (!a)
    return 0;
  if ((((a->esq!=NULL) && (a->dir==NULL))) || (((a->esq==NULL) && (a->dir!=NULL)))){
    return 1;
  }
  return conta_pais_um_filho(a->esq) + conta_pais_um_filho(a->dir);
}

//Ãrvore BinÃ¡ria de Busca

typedef struct ABB
{
    int info;
    struct ABB *esq, *dir;
}TABB;

TABB *inicializar2(){
    return NULL;
}

int vazia2(TABB *A){
    return (A == NULL);
}

TABB *criar2(int r, TABB *e,TABB *d)
{
    TABB *novo = (TABB *)malloc(sizeof(TABB));
    novo->info = r;
    novo->esq = e;
    novo->dir = d;
    return novo;
}

void imprimir2(TABB *a){
    printf("<");
    if(!vazia2(a)){
        printf("%d",a->info);
        if ((!vazia2(a->esq)) || (!vazia2(a->dir))){
            imprimir2 (a->esq);
            imprimir2 (a->dir);
        }
    }
printf(" >");
}

int maior (TABB *a){
  if (!a){
    return 0;
  }
  if (a->dir!=NULL){
      return maior(a->dir);
  }
  else{
      return a->info;
  }
 
}

int menor (TABB *a){
  if (!a){
    return 0;
  }
  if (a->esq!=NULL){
      return menor(a->esq);
  }
  else{
      return a->info;
  }
 
}
