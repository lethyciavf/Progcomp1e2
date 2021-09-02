/* Escrever um código para receber 8 pontos Pi(Xi,Yi) e mostrar a matriz distancia.
 Implementar os módulos: 
- Calcula_distancia
- Calcula_matriz
- Mostra_pontos
- Mostra_matriz (%.2f) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void LePontos (float Vx[ ], float Vy[ ])
	{
	int a;
		for (a=0; a<8; a++) {
			printf ("Entre com a abscissa do Ponto [%i]: ", a);
			scanf ("%f", &Vx[a]);
			printf ("Entre com a ordenada do Ponto [%i]: ", a);
			scanf ("%f", &Vy[a]);
		}
	}
	
void Calcula_Distancia (float Vx[ ], float Vy[ ], float V3[ ])
	{
	int i,j,a=0;
	float M,N,O,P;
		for (i=0; i<8; i++) {
			for (j=0; j<8; j++) {
			M = Vx[i];
			N = Vx[j];
			O = Vy[i];
			P = Vy[j];
			V3[a] = sqrt((pow((N-M),2))+(pow((P-O),2)));
			a++;
			}
		}
	}
	
void Monta_Matriz (float V3[ ], float M[ ][8])
	{
	int i,j,a=0;
		for (i=0; i<8; i++) {
			for (j=0; j<8; j++) {			
			M[i][j] = V3[a];
			a++;
			}
		}	
	}

void Mostra_Pontos (float Vx[ ], float Vy[ ])
	{
	int a;
		printf ("\n  *******Pontos*******  \n");
		for (a=0; a<8; a++) {
		printf ("[%.2f,%.2f] \t", Vx[a], Vy[a]);
		}
	}
	
void Mostra_Matriz (float M[ ][8])	
	{
	int i,j;
		printf ("\n  *******Matriz Distancia*******  \n");
		for (i=0; i<8; i++) {
			for (j=0; j<8; j++) {
			printf ("[%.2f] \t", M[i][j]);
			}
			printf ("\n");
		}
	}
	
float main ( )
{
	float Vx[8], Vy[8], V3[8], Mat[8][8];
	LePontos (Vx,Vy);
	Mostra_Pontos (Vx,Vy);
	Calcula_Distancia (Vx, Vy, V3);
	Monta_Matriz (V3, Mat);
	Mostra_Matriz (Mat);
} 