#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct lista {
	float info;
	float dado;
	struct lista* prox;
}; 
typedef struct lista Lista;

struct fila {
	Lista* ini;
	Lista* fim;
};
typedef struct fila Fila;

Fila* fila_cria(void){
	Fila* f = (Fila*)malloc(sizeof(Fila));
	f->ini=NULL;
	f->fim=NULL;
	return f;
}

void fila_insere(Fila* f, float v, float h) {
	Lista* n = (Lista*)malloc(sizeof(Lista));
	n->info=v;
	n->dado=h;
	n->prox=NULL;
	if (f->fim!=NULL)
		f->fim->prox=n;
	else
		f->ini=n;
		f->fim=n;
}

void fila_libera(Fila* f){
	Lista* q=f->ini;
	while(q!=NULL){
		Lista* t=q->prox;
		free(q);
		q=t;
		}
	f=q;
}

void fila_imprime(Fila* f){
	Lista* q;
	if (f!=NULL) {
	 for(q=f->ini;q!=NULL;q=q->prox){
		printf("Angulo %.2f ",q->info);
		printf("Sen(A) %.2f\n", q->dado);}
		}
	 else
		printf("\nFila Vazia\n\n");
}

int main () {

Fila *f;
double senA, p1, p2, p3;
double A=0;
f = fila_cria();
while (A<=6.3) {
	p1 = pow(A,3);
	p2 = pow(A,5);
	p3 = pow(A,7);
	senA = A - ( p1 / 6 ) + ( p2 / 120 ) - ( p3 / 5040 );
	A = A + 0.1;
	fila_insere(f, senA, A);
	//printf("Angulo: %.2f", A);
	//printf(" sen(A): %.2f\n", senA);
	}
	fila_imprime(f);
	fila_libera(f);
}