//Lethycia Venturini
//12.28

//Recursiva
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double soma (double a, double b) {
	if (a == 51) {
	return 0;}
	else {
	if(fmod(a,2)==0){
	return (b/a) + soma(a+1,((b-3)*-1));}
	else {
	return (b/a) + soma(a+1,((b+3)*-1));}
	}
}

int main () {
double termo1, termo2;
double s = 0;
termo1 = 1;
termo2 = 1000;

s = soma(termo1,termo2);

printf ("Série = %.2f\n",s);
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
	Lista* n = (Lista*)malloc(sizeof(Lista));
	n->info=v;
	n->prox=NULL;
	if (f->fim!=NULL)
		f->fim->prox=n;
	else
		f->ini=n;
		f->fim=n;
}	

void fila_libera(Fila* f) {
	Lista* q = f->ini;
	while (q!= NULL) {
	Lista* t=q->prox;
	free(q);
	q=t;
	}
f=q;
}

void fila_imprime(Fila *f) {
	Lista *q;
	if (f!=NULL)
	for(q=f->ini;q!=NULL;q=q->prox)
		printf("Termo = %f \n",q->info);
	else
		printf("\nFila Vazia\n\n");
}

int main () {
Fila* f;

double a,b,sinal;
double s = 0;
f = fila_cria();
a = 1;
b = 1000;
sinal = -1;
while (a<=50) {
	s += b/a;
	fila_insere(f,s);
	a++;
	if(fmod(b,2)==0) {
	b = b-3;
	b = b*sinal;}
	else {
	b = b+3;
	b = b*sinal;}
}
fila_imprime(f);
printf ("Série = %.2f\n",s);
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
	Lista* prim;
};
typedef struct pilha Pilha;

Pilha* pilha_cria() {
	Pilha* p = (Pilha*)malloc(sizeof(Pilha));
	p->prim=NULL;
	return p;
}

void pilha_insere(Pilha* p, float dado) {
	Lista* n=(Lista*)malloc(sizeof(Lista));
	n->x=dado;
	n->prox=p->prim;
	p->prim=n;
}
float pilha_libera(Pilha* p) {
	Lista *q, *t;
	q=p->prim;
	while (q!=NULL) {
	t=q->prox;
	free(q);
	q=t;
	}
free(p);
}

void pilha_imprime(Pilha* p) {
	Lista* q;
	if (p!=NULL)
	 for(q=p->prim;q!=NULL;q=q->prox)
	 printf("Termo = %f \n", q->x);
}

int main () {
Pilha* p;
double a,b,sinal;
double s = 0;
p = pilha_cria();
a = 1;
b = 1000;
sinal = -1;
while (a<=50) {
	s += b/a;
	pilha_insere(p,s);
	a++;
	if(fmod(b,2)==0) {
	b = b-3;
	b = b*sinal;}
	else {
	b = b+3;
	b = b*sinal;}
}
pilha_imprime(p);
pilha_libera(p);
printf ("Série = %.2f\n",s);
}
