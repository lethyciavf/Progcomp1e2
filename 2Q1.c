#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct lista {  
	int x;
	struct lista* prox;
};
typedef struct lista Lista;

struct pilha { 
	Lista* prim;
};
typedef struct pilha Pilha;

Pilha* pilha_cria() { 
	Pilha* p=(Pilha*)malloc(sizeof(Pilha));
	p->prim = NULL;
	return p;
}

void pilha_insere (Pilha* p, float dado) {
	Lista* n = (Lista*)malloc(sizeof(Lista));
	n -> x = dado;
	n -> prox = p -> prim;
	p -> prim = n;
}

int pilha_libera (Pilha*p) { 
	Lista *q, *t;
	q = p->prim;
	while (q != NULL) {
		t = q->prox;
		free(q);
		q=t;
	}
	free(p);
}

void pilha_imprime(Pilha*p) { 
	Lista*q;
	if (p != NULL)
		for (q=p-> prim;q!=NULL;q=q->prox)
			printf ("Termo: %d \n", q->x);
	else
		printf ("\nPilha vazia\n\n");
}

int main () {
	Pilha*p;
	p=pilha_cria();
	int i,j;
	int mat[4][4];
	
	for(i=0;i<4;i++) {
		for (j=0;j<4;j++) {
			printf("Entre com o valor de Matriz[%d][%d]: ",i,j); 
			scanf("%d\n",&mat[i][j]);
			
			if(i+j>3) {
				pilha_insere(p,mat[i][j]);}
			}
		}
	printf("\n***Matriz inserida***\n");
	for(i=0;i<4;i++) {
		for (j=0;j<4;j++) {
			printf(" %d \t",mat[i][j]);}
		printf("\n");
	}
			
			
	pilha_imprime(p);
	pilha_libera(p);
}