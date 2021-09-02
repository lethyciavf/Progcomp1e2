#include <stdio.h>
#include <stdlib.h>
/* definicao de tipo */
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
/* definicao de funcoes */

Pilha* pilha_cria(void)
{
  Pilha* p = (Pilha*)malloc(sizeof(Pilha));
  p-> prim = NULL;
  return p;
}
void pilha_insere(Pilha* p, int dado)
{
  Lista* n = (Lista*)malloc(sizeof(Lista));
  n -> x = dado;
  n -> prox = p->prim;
  p->prim = n;
}int pilha_vazia(Pilha *p)
{
    return (p->prim == NULL);

}
void pilha_remove(Pilha* p)
{
  Lista* t;
  int v;
  if ( pilha_vazia(p) )
    {
        printf("\nPilha vazia\n");
        system("pause");
    }
    else
    {
        t = p->prim;
        v = t->x;
        p->prim = t->prox;
        free(t);
    }
}
int pilha_libera(Pilha* p)
{
    Lista* q = p->prim;
    while (q != NULL)
    {
        Lista* t = q->prox;
        free(q);
        q = t;
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

    int main() {
        Pilha* p;
        int x, numDiv = 0, contPrimo = 0, repetidor;
        p = pilha_cria();
        printf("Contagem de numeros primos de 5000 a 7000.");
        for(repetidor = 5000; repetidor < 7000; repetidor++){
            numDiv = 0;
            for(x = 1; x <= repetidor; x++){
                if(repetidor % x == 0) {
                    numDiv++;
                    pilha_insere(p,contPrimo);
                }
            }
            if(numDiv == 2)
                contPrimo++;
            }
            pilha_imprime(p);
             pilha_libera(p);
    printf("\n\nQuantidade de numeros primos no intervalo foi de %d numeros primos.", contPrimo);
    return 0;
    }