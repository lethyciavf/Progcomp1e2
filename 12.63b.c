/*Fazer um algoritmo que:
• calcule o numero de divisores dos numeros compreendidos entre 300 e 400.
• Escreva cada numero e o numero de divisores correspondentes.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* definicao de tipo */

struct lista
{
    int x;
    int y;
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
void pilha_insere(Pilha* p, int dado, int info)
{
  Lista* n = (Lista*)malloc(sizeof(Lista));
  n -> x = dado;
  n -> y = info;
  n -> prox = p->prim;
  p->prim = n;
}
int pilha_libera(Pilha* p)
{
    Lista *q, *t;
    q = p->prim;
    while (q != NULL)
    {
        t = q->prox;
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
        printf("Numero %d e Quantidade de divisores %d \n",q->x,q->y);
      else
        printf("\nPilha Vazia\n");
    printf("\n");
}

int main () {
	Pilha *p;
	int n, div, k;
	p = pilha_cria();
	n = 300;
	div = 1;
	k=0;
	
	while (n<=400) {
	k=1;
	div = 1;
		while (div != n) {
			if (n%div == 0){
				k++;
				div++;}
			else {
				div++;}
			}
	pilha_insere(p,n,k);
	n++;
	}
	pilha_imprime(p);
	pilha_libera(p);
}