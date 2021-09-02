/* Versão 2.0:
	Criação de arquivo .txt contendo a matriz
*/

#include <stdio.h>
#include <stdlib.h>

void LeMatriz (int M[ ][4])
	{
	int i, j;
	for (i=0; i < 4; i++) { 
		for (j=0; j < 4; j++){
			printf ("\n Entre com o valor de [%i] [%i]: ", i, j);
			scanf ("%i", &M[i][j]);
			}
		}	
	}
	
void LimpaDiag (int M[ ][4], int M2[ ][4])
	{
	int i, j;
	for (i=0; i<4; i++)
		for (j=0; j<4; j++)
			if (i == j) {
			M[i][j] = 0;
			M2[i][j] = M[i][j];
			}
			else {
			M2[i][j] = M[i][j];
			}
	}			
			
void Mostra (int M[ ][4])
	{
	int i, j;
	FILE *arq;
	arq = fopen ("Mex3.3.txt", "w");
	if (arq == NULL) {
	printf ("Não foi possível criar o arquivo \n");
	}
	printf ("\n *****Matriz***** \n");
	fprintf (arq, "\n *****Matriz***** \n");
	for (i=0; i<4; i++) {
		for (j=0; j<4; j++) {
			printf("%3i", M[i][j]);
			fprintf(arq, "%3i", M[i][j]);
			}
		printf (" \n ");
		fprintf (arq, " \n ");
		}
	}
	
int main ( )
	{
	int Mat[4][4], Mat2[4][4];
	LeMatriz(Mat);
	LimpaDiag(Mat,Mat2);
	Mostra(Mat2);
	}
			 