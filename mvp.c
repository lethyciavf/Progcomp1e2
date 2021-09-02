/* Gerar 100 numeros aleatórios do intervalo [0,90] em matriz 10x10
e armazenar em um vetor os numeros primos sorteados.
Mostrar a matriz e o vetor. */

#include <stdio.h>
#include <stdlib.h>

void Aleatorio (int Mat[ ][10])
	{
		int i,j;
		srand (time(NULL));
		for (i=0; i<10; i++) {
			for (j=0; j<10; j++) {
				Mat[i][j]=rand()%90;
			}
		}	
	}
	
int TestaPrimo (int M2[ ][10], int Vet[ ])
	{
		int i,j,a=0,l=0,K=0;
		for (i=0; i<10; i++) {
			for (j=0; j<10; j++) {
				l=M2[i][j];
				if (l==2||l==3||l==5||l==7) {
				Vet[a]=l;
				a++; }
				else if (l==0||l==1||l%2==0||l%3==0||l%5==0||l%7==0) {
				j++; }
				else {
				Vet[a]=l;
				a++; }
			}
		}
		return a;		
	}
		
void Mostra (int M3[ ][10], int V2[ ], int Q)
{
	int i,j,a;	
	printf ("\n *****Matriz***** \n");
	for (i=0; i<10; i++) {
		for (j=0; j<10; j++) {
			printf("%3i", M3[i][j]);
			}
		printf (" \n ");
		}
		
	printf ("\n *****Vetor***** \n");
	for (a=0; a<Q; a++) {
		printf ("%i \t", V2[a]);
		}
		printf (" \n ");
}

int main ( )		
{
	int N;
	int Mat[10][10], Vet[100];
	Aleatorio(Mat);
	N = TestaPrimo(Mat,Vet);
	Mostra(Mat,Vet,N);
	
}
