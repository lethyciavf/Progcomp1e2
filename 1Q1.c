#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct lista
{
    float info;
    struct lista* prox;
};

typedef struct lista Lista;
struct fila

{
    Lista* ini;
    Lista* fim;
};

typedef struct fila Fila;

Fila* fila_cria(void)
{
  Fila* f = (Fila*)malloc(sizeof(Fila));
  f-> ini = NULL;
  f-> fim = NULL;
  return f;
}

void fila_insere(Fila* f, float dado)
{
  Lista* n = (Lista*)malloc(sizeof(Lista));
  n -> info = dado;
  n -> prox = NULL;
  if (f->fim != NULL)
    f->fim->prox = n;
  else
    f->ini = n;
  f->fim = n;
}

void fila_libera(Fila* f)
{
    Lista* q = f->ini;
    while (q != NULL)
    {
        Lista* t = q->prox;
        free(q);
        q = t;
    }
    f = q;
}

void fila_imprime(Fila* f)
{
    Lista* q;
    if (f != NULL)
      for (q = f->ini;q != NULL;q = q->prox)
        printf("%.2f\n",q->info);
      else
        printf("\nFila Vazia\n");
    printf("\n");
}

void fila_soma(Fila* f)
{
    Lista* q;
    float soma;
    soma = 0;
    if (f != NULL)
      for (q = f->ini;q != NULL;q = q->prox)
        soma = soma + (float)q->info;
      printf("\nSoma dos termos da serie : %.2f\n",soma);
    printf("\n");
}

int main()
{
    Fila*p;
    double valor, c, d;
    c = 1;
    valor = 1;
    p = fila_cria();
    while (c != 21)
    {
        fila_insere(p,valor);
        c = c + 1;
        valor = valor * 3;
    }
    printf("\nConteudo da pilha: \n");
    fila_imprime(p);
    fila_libera(p);
    printf("\n\n");
    return 0;
}