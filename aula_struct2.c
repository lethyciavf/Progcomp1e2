#include <stdio.h>
#include <stdlib.h>

struct cel{
	int n;
	struct cel *p;
};
typedef struct cel c;
int main () {
c *a, *b; //ambos apontam para a estrutura c, porém andam diferente
a = NULL;
int x = 30;

while (x != 0) {
	b = (c*)malloc(sizeof(c));
	b -> n = x;
	x -= 10;
	b -> p = a;
	a = b;
}
while (b != NULL) {
	printf("%i \n", b-> n);
	b = b -> p;
}
}