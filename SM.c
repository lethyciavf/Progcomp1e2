/*Escrever uma função para somar e multiplicar argumentos. 
Testa-la*/

#include <stdio.h>

void soma_multiplica (float arg1, float arg2, float *soma, float *multi)
{
	/*float arg1, arg2;*/	
	*soma = arg1 + arg2;
	*multi = arg1 * arg2;
}

int main ()
{
	float x, y, soma, multiplica;
	printf ("Entre com o primeiro argumento: ");
	scanf ("%f", &x);
	printf ("Entre com o segundo argumento: ");
	scanf ("%f", &y);
	soma_multiplica (x, y, &soma, &multiplica);
	printf ("A soma resultou em: %.2f", soma);
	printf ("\n");
	printf ("A multiplicação resultou em: %.2f", multiplica);
	printf ("\n");
}	