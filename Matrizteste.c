#include <stdio.h>

int main ( )
{
	int i, j, Matriz[3][3];

	{
			for (i=0; i<3; i++)
				for (j=0; j<3; j++)
					Matriz[i][j] = (6*j);
	printf("\n\n******************* Saida de Dados ********************* \n\n");
	
				for (i=0; i<3; i++)
				{
				for (j=0; j<3; j++)
					printf ("%3d ", Matriz[i][j]);
					printf ("\n");
}
}
	return (0);
}