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
	
float Calcula_Distancia (float X1, float X2, float Y1, float Y2)
	{
	float d;
	d = sqrt((pow((X2-X1),2))+(pow((Y2-Y1),2)));
	return d;
	}
	
void Calcula_Matriz (float Vx[ ], float Vy[ ], float M[ ][8])
	{
	int i,j;
		for (i=0; i<8; i++) {
			for (j=0; j<8; j++) {			
			M[i][j] = Calcula_Distancia (Vx[i], Vx[j], Vy[i], Vy[j]);
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
	
int main ( )
{
	float Vx[8], Vy[8], Mat[8][8];
	LePontos (Vx,Vy);
	Mostra_Pontos (Vx,Vy);
	Calcula_Matriz (Vx, Vy, Mat);
	Mostra_Matriz (Mat);
} 