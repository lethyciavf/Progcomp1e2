//Lethycia Venturini
//12.64

//Fila
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct lista {
	int info;
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

void fila_imprime(Fila* f) {
	Lista* q;
	if (f != NULL)
		for (q=f->ini;q!=NULL;q=q->prox)
		printf("Numero perfeito: %d\n", q->info);
	else
		printf("\nNenhum numero perfeito foi gerado!\n\n");
}	

int main () {
	Fila *f;
	int n, k, i, d, q=0;
	int vet[100];
	f = fila_cria();
	srand(time(NULL));	
	for (i=0;i<=100;i++){
		vet[i]=rand()%100;
	}
	for (i=0;i<=100;i++){
		n = vet[i];
		d = 1;
		if (n == 1) {
			i++;
		}
		else {
		for (k=2;k<n;k++){
	 		if (fmod(n,k)==0 && n != k) {
				d = d + k;
	 		}
		}
	 	if (d == n) {
	 		fila_insere(f,n);
	 	}
	 }
	}
	fila_imprime(f);
	fila_libera(f);
}

//Pilha
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct lista {
	float x;
	struct lista* prox;
};
typedef struct lista Lista;

struct pilha {
	Lista *prim;
};
typedef struct pilha Pilha;

Pilha* pilha_cria() {
	Pilha* p=(Pilha*)malloc(sizeof(Pilha));
	p->prim=NULL;
	return p;
}

void pilha_insere (Pilha* p, float dado) {
Lista* n=(Lista*)malloc(sizeof(Lista));
n->x=dado;
n->prox=p->prim;
p->prim=n;
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

void pilha_imprime(Pilha* p) {
Lista *q;
 if (p != NULL)
	for(q=p->prim;q!=NULL;q=q->prox)
	printf("Termo = %f\n",q->x);
 else
	printf("\nPilha vazia\n\n");
}

int main () {
	Pilha *p;
	int n, k, i, d, q=0;
	int vet[100];
	p = pilha_cria();
	srand(time(NULL));	
	for (i=0;i<=100;i++){
		vet[i]=rand()%100;
	}
	for (i=0;i<=100;i++){
		n = vet[i];
		d = 1;
		if (n == 1) {
			i++;
		}
		else {
		for (k=2;k<n;k++){
	 		if (fmod(n,k)==0 && n != k) {
				d = d + k;
	 		}
		}
	 	if (d == n) {
	 		pilha_insere(p,n);
	 	}
	 }
	}
	pilha_imprime(p);
	pilha_libera(p);
}