/*Programa que recebe um decimal inteiro de até 2 dígitos, converte e 
armazena em uma pilha e mostra o resultado da conversão em binário. */

#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int x;
    struct lista* prox;
};
typedef struct lista Lista;

struct pilha
{
    Lista* prim;
};
typedef struct pilha Pilha;

Pilha* pilha_cria(void)
{
  Pilha* p = (Pilha*)malloc(sizeof(Pilha));
  p-> prim = NULL;
  return p;
}
void pilha_insere(Pilha* p, int dado)
{
  Lista* n = (Lista*)malloc(sizeof(Lista));
  n -> x = dado;
  n -> prox = p->prim;
  p->prim = n;
}
int pilha_libera(Pilha* p)
{
    Lista *q, *t;
    q = p->prim;
    while (q != NULL)
    {
        t = q->prox;
        free(q);
        q = t;
    }
    free(p);
}
void pilha_imprime(Pilha* p)
{
    Lista* q;
    if (p != NULL)
      for (q = p->prim;q != NULL;q = q->prox)
        printf("%i",q->x);
      else
        printf("\nPilha Vazia\n");
    printf("\n");
}

int main()
{
    Pilha* p;
    int dado, quociente,resto;
    p = pilha_cria();
    printf("Digite um valor na base 10 de até 2 dígitos : ");
    scanf("%i",&dado);
    while (dado>99) {
     dado = 0;
     printf("\n!!! Um valor na base 10 de ATÉ 2 dígitos!: ");
     scanf("%i",&dado);
    }
    quociente = dado;
    while (quociente != 0)
    {
      resto     = quociente % 2;
      pilha_insere(p,resto);
      quociente = quociente / 2;
    }
    printf("\n%i convertido para a base 2 : ",dado);
    pilha_imprime(p);
    pilha_libera(p);
    printf("\n");
}
