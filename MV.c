/* Gerar uma matriz 3x5 com os números aleatórios [0,5].
Armazenar em um vetor a soma dos elementos de cada coluna.
Implementar as funções:
- Aleatório
- Mostra_Matriz
- Soma_Colunas
- Mostra_Vetor 
*/

#include <stdio.h>

void aleatorio (int M[ ][5])
{
	srand (time(NULL));
	int i, j;
		for (i=0;i<3;i++) {
			for (j=0;j<5;j++) {
			M[i][j] = rand()%6;
			}
	}
}	

void Mostra_Matriz (int M[][5])
{
	int i, j;
	printf ("\n ******** Matriz ******** \n");
		for (i=0;i<3;i++) {
			for (j=0;j<5;j++) {
			printf ("%3i", M[i][j]);
			}
		printf ("\n");
		}
}

void Soma_Colunas (int M[ ][5], int V[ ])
{
	int i, j;
	for (i=0;i<5;i++)
	V[i] = 0;
	for (j=0;j<5;j++) {
		for (i=0;i<3;i++) {
		V[j] += M[i][j];
		}
	}
}

void Mostra_Vetor (int V[ ])
{
	int a;
	printf ("\n ********* Vetor ********* \n");
	for (a=0;a<5;a++) {
		printf ("%i \t", V[a]);
	}
	printf ("\n");	
}

int main ()
{
	int Mat [3][5], Vet[5];
	aleatorio (Mat);
	Mostra_Matriz (Mat);
	Soma_Colunas (Mat, Vet);
	Mostra_Vetor (Vet);
}
