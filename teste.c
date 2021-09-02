#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Ela provavelmente nao estava funcionando antes 
					//Porque vc nao colocou essa biblioteca, 
					//Que eh a biblioteca que sabe "pow"

struct lista
{
    int info;
    struct lista*prox;
};
typedef struct lista Lista;

struct fila
{
    Lista*ini;
    Lista*fim;
};
typedef struct fila Fila;
Fila* fila_cria(void)
{
    Fila*f;
    f=(Fila*)malloc(sizeof(Fila));
    f->ini=NULL;
    f->fim=NULL;
    return f;
}
void fila_insere(Fila* f, double v)
{
    Lista*n;
    n=(Lista*)malloc(sizeof(Lista));
    n->info=v;
    n->prox=NULL;
    if(f->fim!=NULL)
    f->fim->prox=n;
    else
    f->ini=n;
    f->fim=n;
}

void fila_imprime(Fila* f){ 
	Lista* q;
	if (f!=NULL)
	 for(q=f->ini;q!=NULL;q=q->prox)
		printf("Termo %d \n",q->info);
	 else
		printf("\nFila Vazia\n\n");
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

int main()
{
    Fila* f;
    int x=0, y=0, a=1; //Passei tudo pra int inclusive nas funcoes
    f=fila_cria();
    printf("insira o valor desejado: ");
    scanf("%i",&x); 
    for(y=1;y<=x;y++) //começa do 1, não?!
    {
        a=pow(y,3);
        fila_insere(f,a);
    }
    fila_imprime(f);
    fila_libera(f);
    printf("O cubo do numero e = %d\n",a);
    return 0;
}