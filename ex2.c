#include <stdio.h>

void LeVetor (int V[ ])
{
	int a;
	for (a=0; a<=9; a++)
	{
		printf ("\n Entre com o valor do Vetor %d:", a);
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
	for (a=0; a<=9; a++)
		printf ("%i \t", V3[a]);
}


int main ( )

{
	int A[10], B[10];
	LeVetor (A);
	InverteVetor (A,B);
	Mostra (A);
	Mostra (B);
}