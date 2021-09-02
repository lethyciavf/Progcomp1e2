#include <stdio.h>
#include <stdlib.h>

void ALEATORIOS(int V[ ]) 
	{
		srand (time(NULL));
		int i;
		for (i=0; i < 20; i++)
		V[i]=50+rand()%41;
	}
	
int UNICOS(int V1[ ], int V2[ ])
	{
		int i, j, k=0 ,REP;
		for (i=0; i < 20; i++) {
			REP = 0;
			for (j=0; j < 20; j++)
				if (V1[i]==V1[j])
				REP++;
			if (REP==1) {
			V2[k]=V1[i];
			k++;
			}
			}
		return k;
	}
	
void MOSTRA (int V[ ], int k) 
	{
	printf("\n\n");
	int i;
	for (i=0; i < k; i++)
	printf ("%i\t", V[i]);
	}
	
int main ( ) 
	{
	int V1[20], V2[20], T;
	ALEATORIOS(V1);
	T = UNICOS(V1,V2);
	MOSTRA(V1,20);
	MOSTRA(V2, T);
	}	