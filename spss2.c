/* Receber 25 nº Matriz 5x5, linha por linha
Calcular soma dos elementos da diag. principal e 
a soma dos elementos da diag. secundaria.
Funcoes:
- Recebe_Matriz
- Calcula_Soma
- Mostra_Matriz
- Mostra_Soma 

versão 2.0:
Criar um arquivo .txt mostrando
a matriz e as somas 
*/

#include <stdio.h>
#include <stdlib.h>

void Recebe_Matriz (int M[ ][5])
{
	int a,b;
	for (a=0;a<5;a++) {
		for (b=0;b<5;b++) {
		printf("Entre com o valor da casa [%i][%i] ", a, b);
		scanf("%i", &M[a][b]);
		}
		printf ("\n");
	}		
}

void Calcula_Soma (int M[ ][5], int *s1, int *s2)
{
	int a,b;
	for (a=0;a<5;a++) 
		for (b=0;b<5;b++) {
		if (a==b) {
		*s1 = *s1 + M[a][b];
		}
		if (a+b==4) {
		*s2 = *s2 + M[a][b];
		}
	}
}

void Mostra_Matriz (int M[ ][5])
{
	int a,b;
	FILE *arq;
	arq = fopen ("Matriz.txt", "w");
	if (arq == NULL) {
	printf ("Erro ao criar o arquivo. \n");
	}
	printf("********* Matriz ********* \n");
	fprintf (arq, "********* Matriz ********* \n");
	for (a=0;a<5;a++) {
	fprintf (arq, "\n");
		for (b=0;b<5;b++) {
		printf("%i \t", M[a][b]);
		fprintf (arq, "  %3d  ", M[a][b]);
		}
		printf ("\n");
	}		
}

void Mostra_Soma (int *s1, int *s2)
{
	FILE *arq;
	arq = fopen ("Matriz.txt", "a");
	if (arq == NULL) {
	printf ("Erro ao acrescentar o arquivo. \n");
	}
	
	printf("A Soma dos elementos da diagonal principal resultou em %i", *s1);
	fprintf(arq, "\n A Soma dos elementos da diagonal principal resultou em %i", *s1);
	printf("\n");
	fprintf(arq, "\n");
	printf("A Soma dos elementos da diagonal secundaria resultou em %i", *s2);
	fprintf(arq, "\n A Soma dos elementos da diagonal secundaria resultou em %i", *s2);
	printf("\n");
	fprintf(arq, "\n");
}

int main ()
{
int Mat [5][5], somap=0, somas=0; 

Recebe_Matriz (Mat);
Mostra_Matriz (Mat);
Calcula_Soma (Mat, &somap, &somas);
Mostra_Soma (&somap, &somas);
}