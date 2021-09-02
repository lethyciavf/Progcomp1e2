#include <stdio.h>
#include <stdlib.h>
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

Fila* fila_cria(void){
	Fila* f = (Fila*)malloc(sizeof(Fila));
	f->ini=NULL;
	f->fim=NULL;
	return f;
}

void fila_insere(Fila* f, float v) {
	Lista* n = (Lista*)malloc(sizeof(Lista));
	n->info=v;
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
	if (f!=NULL)
	 for(q=f->ini;q!=NULL;q=q->prox)
		printf("Termo %f \n",q->info);
	 else
		printf("\nFila Vazia\n\n");
}

int main () {
	Fila*f;
	double pi, N, a;
	int i;
	f=fila_cria();
	pi = 4;
	N = 3;
	i = 0;
	a = 4/N;
	
	while (a >= 0.0001) {
	a = 4/N;
	
	if (i == 1) {
	pi = pi + a;
	fila_insere(f,pi);
	i = 0; }
	
	else {
	pi = pi - a;
	fila_insere(f,pi);
	i = 1; }
	
	N = N + 2; }
	fila_imprime(f);
	fila_libera(f);
}
	