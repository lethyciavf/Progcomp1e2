#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct lista
{
    double x;
    struct lista * prox;
};

 typedef struct lista Lista;

 struct pilha
 {
     Lista * prim;
 };

 typedef struct pilha Pilha;
 Pilha * pilha_cria(void)
 {
     Pilha* p = (Pilha*)malloc(sizeof (Pilha));
     p->prim = NULL;
     return p;
 }

 void pilha_insere (Pilha* p, double dado)
 {
     Lista* n = (Lista*)malloc(sizeof(Lista));
     n -> x = dado;
     n-> prox = p -> prim;
     p -> prim = n;
 }

 int pilha_libera(Pilha*p)
 {
     Lista* q = p->prim;
     while (q != NULL)
     {
        Lista* t = q->prox;
        free(q);
        q =t;
 }
 free(p);
 }

 void pilha_imprime(Pilha *p)
 {
     Lista*q;
     if ( p != NULL)
        for ( q = p->prim; q != NULL; q = q->prox)
        printf("%.2lf\n", q->x);
     else
        printf("\nPilha Vazia\n");
     printf("\n");
 }

 void pilha_soma_pilha (Pilha*p)
 {
     Lista *q, *aux;
     double soma;
     soma = 0;
     if (p != NULL)
     {
         q = p->prim;
         aux = q;
         while ( q != NULL)
         {
             soma = soma + q->x;
             q = q ->prox;
         }
         printf(" \n\nSoma = %lf \n", soma);
     }
     else
        printf("\nPilha Vazia\n");
     printf("\n");
 }

int main()
{
    Pilha*p;
    int n, a, c;
    a = 0;
    c = 0;
    printf("\n Digite um numero para obter seus divisores impares: ");
    scanf("%d", &n);
    p = pilha_cria();
    while (a <= n)
        {
            if (a%2 == 1)
            {
                if (n%a == 0)
                {
                    c = c +1;
                    pilha_insere(p,a);
                }
            }
            a = a + 1;
        }
    printf("\nConteudo da pilha: \n");
    pilha_imprime(p);
    pilha_libera(p);
    printf("\n\n");
    return 0;
}