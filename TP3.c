#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int x;
    struct lista* prox;
};

typedef struct lista Lista;

struct pilha
{
    Lista* prim;
};
typedef struct pilha Pilha;

Pilha* pilha_cria(void)
{
  Pilha* p = (Pilha*)malloc(sizeof(Pilha));
  p-> prim = NULL;
  return p;
}

void pilha_insere(Pilha* p, int v)
{
  Lista* n = (Lista*)malloc(sizeof(Lista));
  n -> x = v;
  n -> prox = p->prim;
  p->prim = n;
}

float pilha_libera(Pilha* p){
Lista *q, *t;
q = p -> prim;
while (q!= NULL) {
t = q->prox;
free(q);
q=t;
}
free(p);
}

void pilha_imprime(Pilha* p)
{
    Lista* q;
    if (p != NULL)
      for (q = p->prim;q != NULL;q = q->prox)
        printf("%d\t",q->x);
      else
        printf("\nPilha Vazia\n");
    printf("\n");
}


int numeros_pares (Pilha *p)
{
  Lista *q; 
  int contador;
  contador = 0;
  if (p!=NULL)
  {
    for (q = p->prim; q!=NULL;q = q->prox)
        if (q->x%2==0)
        contador++;}
   return contador;
  }

int main ()
{
    int c;
    Pilha *p;
    p = pilha_cria();
    pilha_insere(p,10);
    pilha_insere(p,13);
    pilha_insere(p,2);
    pilha_insere(p,8);
    pilha_insere(p,9);
    pilha_insere(p,5);
    c = numeros_pares(p);
    printf("%i\n",c);
    pilha_libera(p);
}
