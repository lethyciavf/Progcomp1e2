#include <stdio.h>
#include <stdlib.h>

struct lista {
  int info;
  struct lista *prox;};
  typedef struct lista Lista;
  Lista *lst_cria() {
return NULL;}
Lista *lst_insere(Lista*L,int x) {
  Lista*novo = (Lista*)malloc(sizeof(Lista));
  novo -> info=x;
  novo -> prox=L;
return novo; }
void lst_imprime(Lista*L) {
  Lista*p;
  for (p=L;p!= NULL;p=p->prox){
   printf("%d\n",p->info);
   printf("\n\n");
}
}
int main(){
 int i, a[4]={8,2,5,3};
 Lista*A;
 A=lst_cria();
 for(i=0;i<3;i++)
 A=lst_insere(A,a[i]);
 lst_imprime(A);
 Lista*B,*C;
 C=lst_cria();
 B=A;
while (B!= NULL) {
 C = lst_insere(C,B->info);
 B=B->prox;}
lst_imprime(C);}