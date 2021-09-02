#include <stdio.h>

void CriaMat (int M[ ][5])
{
	int i, j, a, b, c;
	a = 200;
	b = 20;
			
				while (a < 800)
				{
					if (b < 80)
						for (c=0;c < 8; c = c + 2)
							{
								M[i][j] = a+b+c;
								j++;
								if (j < 5)
									i++;
									j = 0;
							}	
					else 
						b = b + 200;
				}
					if (b > 80)	
						a = a + 200;
						b = 20;
				
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