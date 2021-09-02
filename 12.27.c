//Lethycia Venturini
//12.27

//Recursiva
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double soma (double a, double b) {
	if (b == 12) {
	return 0;
	}
	else {
	return (a/(pow(a,2)) - b/(pow(b,2))) + soma(a+2,b+2);
	}
}

int main () {

double termo1,termo2;
termo1 = 1;
termo2 = 2;
double s = 0;

s = soma(termo1,termo2);

printf ("Soma = %f \n", s);
}

//Fila
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

Fila* fila_cria(void) {
	Fila* f = (Fila*)malloc(sizeof(Fila));
	f->ini=NULL;
	f->fim=NULL;
	return f;
}

void fila_insere(Fila* f, float v) {
	Lista* n =(Lista*)malloc(sizeof(Lista));
	n->info=v;
	n->prox=NULL;
	if(f->fim!=NULL)
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
	for (q=f->ini;q!=NULL;q=q->prox)
		printf("Termo %f\n",q->info);
	else
		printf("\nFila Vazia\n\n");
}

int main () {
Fila* f;

double a,b;
f = fila_cria();
a=1;
b=2;
double s = 0;

while (b<=10) {
	s += a/(pow(a,2)) - b/(pow(b,2));
	fila_insere(f,s);
	a+=2;
	b+=2;
}

fila_imprime(f);
printf ("Soma = %f \n", s);
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

void pilha_insere(Pilha* p, float dado) {
	Lista*n=(Lista*)malloc(sizeof(Lista));
	n->x=dado;
	n->prox=p->prim;
	p->prim=n;
}

float pilha_libera(Pilha* p) {
	Lista *q, *t;
	q = p->prim;
	while (q != NULL) {
	t=q->prox;
	free(q);
	q=t;
	}
free(p);
}

void pilha_imprime(Pilha* p) {
	Lista* q;
	if (p != NULL)
	 for (q=p->prim; q != NULL; q = q->prox)
	 printf("Termo = %f \n", q->x);
	else
	 printf("\n Pilha vazia \n\n");
} 

int main () {

Pilha* p;

double a,b;
a=1;
b=2;
double s = 0;

p = pilha_cria();

while (b<=10) {
	s += a/(pow(a,2)) - b/(pow(b,2));
	pilha_insere(p,s);
	a+=2;
	b+=2;
}

pilha_imprime(p);
pilha_libera(p);
printf ("Soma = %f \n", s);
}