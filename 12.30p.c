#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct lista {  //obrigatório
	float x;
	float y;
	struct lista* prox;
};
typedef struct lista Lista;

struct pilha { //obrigatório
	Lista* prim;
};
typedef struct pilha Pilha;

Pilha* pilha_cria() { //obrigatório
Pilha* p=(Pilha*)malloc(sizeof(Pilha));
p->prim = NULL;
return p;
}

void pilha_insere (Pilha* p, float dado, float info) { //obrigatório
Lista* n = (Lista*)malloc(sizeof(Lista));
n -> x = dado;
n -> y = info;
n -> prox = p -> prim;
p -> prim = n;
}

float pilha_libera (Pilha*p) {  //obrigatório
Lista *q, *t;
q = p->prim;
while (q != NULL) {
t = q->prox;
free(q);
q=t;
}
free(p);
}

void pilha_imprime(Pilha*p) {  //obrigatório
Lista*q;
if (p != NULL) 
for (q=p-> prim;q!=NULL;q=q->prox){
printf ("Angulo = %.2f ", q->x);
printf ("Sen(A) = %.2f\n", q->y);}
else
printf ("\nPilha vazia\n\n");
}

int main () {

Pilha *p;
double senA, p1, p2, p3;
double A=0;
p = pilha_cria();
while (A<=6.3) {
	p1 = pow(A,3);
	p2 = pow(A,5);
	p3 = pow(A,7);
	senA = A - ( p1 / 6 ) + ( p2 / 120 ) - ( p3 / 5040 );
	A = A + 0.1;
	pilha_insere(p, senA, A);
	//printf("Angulo: %.2f", A);
	//printf(" sen(A): %.2f\n", senA);
	}
	pilha_imprime(p);
	pilha_libera(p);
}