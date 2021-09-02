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

void fila_imprime(Fila* f){
	Lista* q;
	if (f!=NULL)
	 for(q=f->ini;q!=NULL;q=q->prox)
		printf("Termo: %d \n",q->info);
	 else
		printf("\nFila Vazia\n\n");
}


int main () {
	Fila*f;
	int n,k;
	f=fila_cria();
	
	printf("Entre com o primeiro valor: ");
	scanf("%d",&n);
	printf("Entre com o segundo valor: ");
	scanf("%d",&k);
	
	printf("Multiplos de 7 no intervalo de %d à %d\n", n,k ); //Tem que colocar aqui pq se colocar depois n vai ter o valor de k!
	
	while (n!=k+1) {
		if (n%7==0) {
			fila_insere(f,n);}
		n++;}
		
	fila_imprime(f);
	fila_libera(f);
}