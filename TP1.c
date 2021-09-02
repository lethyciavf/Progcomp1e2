//Escrever uma função para retornar 1(V) ou 0(F), conforme o ponto P(x,y) esteja ou não dentro da
//circunferencia de raio R e centro(x0,y0). O ponto P é uma variavel estruturada e a circunferencia outra.
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct ponto {
	int x;
	int y;
};
typedef struct ponto P;

struct circunferencia {
	int x0;
	int y0;
	int R;
};
typedef struct circunferencia Circ;

P* ponto_cria(void)
{
  P* p = (P*)malloc(sizeof(P));
  return p;
}

Circ* circunferencia_cria(void)
{
  Circ* c = (Circ*)malloc(sizeof(Circ));
  return c;
}

int confere_ponto(P*p, Circ*c) {
	int r=0;
	r = sqrt(pow(p->x,2)+pow(p->y,2));
	if (r==c->R) {
		return 1;
	}
	else {
		return 0;
	}
}

int main () {
	P*p;
	Circ*circ;
	p = ponto_cria();
	circ = circunferencia_cria();
	p->x=3;
	p->y=3;
	circ->x0=0;
	circ->y0=0;
	circ->R=5;
	int resposta=0;
	resposta = confere_ponto(p, circ);
	printf("%d\n",resposta);
}