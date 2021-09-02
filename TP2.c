#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int cd(int a, int b) {
	int c;
	c=0;
	while (b < a) {
	c++;
	a=a-b;
}
return c;
}	

int main () {
	int a,b,c;
	printf("entre com o valor de a: ");
	scanf("%d",&a);
	printf("\nentre com o valor de b: ");
	scanf("%d",&b);
	c=cd(a,b);
	printf("Resultado: %d\n",c);
}

