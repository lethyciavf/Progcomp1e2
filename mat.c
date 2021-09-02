#include <stdio.h>

int main ( )
{
	int Mat[16][12], i, j, a, b, c;
	a=200;
	b=20;
	
		for (i=0; i<=16; i++)
		{
			for (j=0; j<=12; j++)
				while (a<=800)
				{
					if (/*b%2=0 &&*/ b<=80)
						for (c=0;c<=8;)
							{
								c += 2;
								Mat[i][j] = a+b+c;
							}	
					else 
						b += 200;
				}
					if (b>80)	
						a += 200;
						b=20;
				
				}							
		}						
		printf ("\n\n ************** Matriz ************* \n\n");
		for (i=0; i<16; i++)
		{
			for (j=0; j<12; j++)
				printf ("%3d", Mat[i][j]);
				printf ("\n");
}