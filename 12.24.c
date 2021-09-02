//Lethycia Venturini
//12.24
/*Programa para retornar a soma dos termos  da serie S=1/1 + 3/2 + 5/3 +...+99/50 usando pilha */

//Recursiva
#include <stdio.h>
#include <stdlib.h>

double soma(double a,double b)
{
    if (b==51)
        return 0;
    else
        return (a/b)+soma(a+2,b+1);
}

int main()
{
    double s=0;
    double termo1=1;
    double termo2=1;
    s=soma(termo1,termo2);
    printf("A soma da serie = %f \n",s);
}

//Fila
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct lista {
	float info;
	struct lista* prox;
};
typedef struct lista Lista;

struct fila {
	Lista* ini;
	Lista* fim;
};
typedef struct fila Fila;

Fila* fila_cria(void) {
	Fila* f = (Fila*)malloc(sizeof(Fila));
	f->ini=NULL;
	f->fim=NULL;
	return f;
}

void fila_insere(Fila* f,float v) {
	Lista* n =(Lista*)malloc(sizeof(Lista));
	n->info=v;
	n->prox=NULL;
	if (f->fim != NULL)
		f->fim->prox=n;
	else 
		f->ini=n;
		f->fim=n;
}

void fila_libera(Fila* f){
	Lista* q =f->ini;
	while (q != NULL) {
	Lista* t=q->prox;
	free(q);
	q=t;
	}
f=q;
}

void fila_imprime(Fila* f){
	Lista* q;
	if (f!=NULL) 
		for(q=f->ini;q!=NULL;q=q->prox)
			printf("Termo %f\n", q->info);
		else
			printf("\nFila Vazia\n\n");
}

int main () {
Fila* f;

double a,b,s;
a = 1;
b = 1;
s = 0;

f = fila_cria();

while (b<=50) {
	s += a/b;
	fila_insere(f,s);
	a += 2;
	b++;
}
fila_imprime(f);
printf ("\nValor total de s = %f \n", s);  
fila_libera(f);
}

//Pilha
#include <stdio.h>
#include <stdlib.h>

struct lista 
{
    float x;
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

void pilha_insere(Pilha* p, float dado) 
{
  Lista* n = (Lista*)malloc(sizeof(Lista));
  n -> x = dado;
  n -> prox = p->prim;
  p->prim = n;
}

float pilha_libera(Pilha* p) 
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
        printf("termo = %f\n",q->x);
    else
        printf("\nPilha Vazia\n");
    printf("\n");

}

int main()
{
    Pilha* p;
    float termo1=1;
    float termo2=1;
    float R=0;
    p = pilha_cria();

    while (termo2<=50)
    {
      R=R+(termo1 / termo2);
      pilha_insere(p,R);
      termo1=termo1+2;
      termo2++;
    }
    pilha_imprime(p);
    pilha_libera(p);
    printf("\n");
    printf(" A soma dos termos = %f\n",R);
    return 0;
}

