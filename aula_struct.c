#include <stdio.h>
#include <stdlib.h>

struct reg{
	int v[5], s;
};
typedef struct reg r;
    
void soma (r *a)
{
    int i;
    a -> s = 0;
    for(i=0;i<5;i++)
    a -> s += a -> v[i];
}
    
void recebe (r *a)
{
	int i;
    for (i=0;i<5;i++)
    a -> v[i]=i+2;
}
    
int main () {
	r a;
	recebe(&a);
	soma(&a);
	printf("Valor = %i \n",a.s);
}
