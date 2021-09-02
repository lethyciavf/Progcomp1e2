#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct lista {
	int x;
	struct lista *prox;
};
typedef struct lista Lista;

Lista *lst_cria (void) {
	return NULL;
}

Lista *lst_insere (Lista *l, int a) {
	Lista *n = (Lista*) malloc(sizeof(Lista));
	n->x = a;
	n->prox = l;
	return n;
}

void lst_imprime (Lista *l) {
	Lista *p;
	if (l!=NULL) {
	for (p = l; p != NULL; p = p->prox) {
		printf ("Termo = %d\n", p->x);
		}}
	else {
	printf ("\nVazio!\n");}
}


void lst_libera (Lista *l) {
Lista * p = l;
while (p != NULL) {
	Lista * t = p->prox; 
	free (p); 
	p = t;
 }
}

/*int lst_maior (Lista*l) {
	lista *q;
	int maior = 0;
	if (q != NULL) {
	for (q = l->prim;q != NULL;q = q->prox) {
		if (p->x > maior){
			p->x = maior; }
		}
	}
	return maior;
}*/



/* função busca: busca o elemento na lista 
Lista * lst_busca (Lista * l , int v) {
 Lista * p;
 for (p = l; p != NULL; p = p->prox) {
  if (p->x == v)
   return p;
 }
 return NULL;
}*/



int main () {
    Lista *l, *p;
    l = lst_cria ();
    p = lst_cria();
    l = lst_insere (l, 200);
    l = lst_insere (l, 100);
    l = lst_insere (l, 32);
    l = lst_insere (l, 20);
    l = lst_insere (l, 2);
    p = lst_maior(l);
	lst_imprime(p);
	lst_imprime(l);
    lst_libera (l);
	lst_libera (p);
}





/*int lst_maior (Lista*l) {
	lista *q, *p;
	int maior = 0;
	if (q != NULL) {
	for (q = l->prim;q != NULL;q = q->prox) {
		if (l->x > maior){
			maior = l->x; }
		}
	}
	for (p = maior;p != NULL;p = p->prox) {
		lst_insere(p,p->x);}
	return p;
}
*/

