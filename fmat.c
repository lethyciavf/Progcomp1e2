#include <stdio.h>

void CriaMat (int M[16][12])
{
	int i, j, a, b, c;
	a=200;
	b=20;
	
		for (i=0; i<=16; i++)
		{
			for (j=0; j<=12; j++)
				while (a<=800)
				{
					if (b<=80)
						for (c=0;c<=8; c = c+ 2)
							{
								/* c += 2; */
								M[i][j] = a+b+c;
							}	
					else 
						b += 200;
				}
					if (b>80)	
						a += 200;
						b=20;
				
				}							
		}				
		
void MostraMat (int M1[16][12])			
{	
	int i,j;
		printf ("\n\n ************** Matriz ************* \n\n");
		for (i=0; i<16; i++)
		{
			for (j=0; j<12; j++)
				printf ("%3d", M1[i][j]);
				printf ("\n");
}
}

int main ( )
{
	int Mat[16][12];
	CriaMat (Mat);
	MostraMat (Mat);
	return (0);
}