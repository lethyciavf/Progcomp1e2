/* Versão 2.0:
	Criação de arquivo .txt contendo os dois vetores
*/

#include <stdio.h>

void LeVetor (int V[ ])
{
	int a;
	for (a=0; a<=9; a++)
	{
		printf ("Entre com o valor do Vetor %d: ", a);
		scanf ("%i", &V[a]);
		if (V[a] <= 0)
		{
			a--;
			printf ("\n Digite apenas valores positivos!");
		}		
	}
}

void InverteVetor (int V[ ], int V2[ ])
{
	int a, b;
	for (a=9, b=0; a>=0; a--, b++)
		V2[b] = V[a];
}

void Mostra (int V3[ ])
{
	int a;
	FILE *arq;
	arq = fopen ("Vetor.txt", "a");
	if (arq == NULL) {
	printf ("Não foi possivel criar o arquivo. \n");
	}
	fprintf (arq, "****Vetor**** \n");
	for (a=0; a<=9; a++) {
		printf ("%i \t", V3[a]);
		fprintf (arq, "%i \t", V3[a]);
	}
			printf ("\n");
			fprintf (arq, "\n");
}


int main ( )

{
	int A[10], B[10];
	LeVetor (A);
	InverteVetor (A,B);
	Mostra (A);
	Mostra (B);
}