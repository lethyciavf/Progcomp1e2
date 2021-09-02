#include <stdio.h>
#include <math.h>

void CriaMat (int M[ ][5])
{
	int i, j, a, b, c;
	a = 200;
	b = 20;
	c = 0;
	
	while (a < 800) {
	c = c + 2;
	M[i][j] = a+b+c;
	i++;
		if (i < 5)
		j++;
		i=0;
			if (c > 8)
			b = b + 20;
			c = 2;
				if (b > 80)
				a = a + 200;
				b = 20;					
						
		}
}							
						
		
void MostraMat (int M1[ ][5])			
{	
	int i,j;
		printf ("\n\n ************** Matriz ************* \n\n");
		for (i=0; i < 5; i++)
		{
			for (j=0; j < 5; j++)
				printf ("%3d", M1[i][j]);
				printf ("\n");
}
}

int main ( )
{
	int Mat[5][5];
	CriaMat (Mat);
	MostraMat (Mat);
}