#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main( )
{
	int mat[9][9],vet[64],s=0,i,j,x,y,z;

	for(x=200;x <= 800;x=x+200)
		for(y=20;y <= 80;y=y+20)
 			for(z=2;z <= 8;z=z+2)
			{
 		     vet[s]=x+y+z;
 		     s++;
			}
	s=0;
	for(i=0; i< 8; i++)
	{
        printf("\n");
        for(j= 0; j< 8; j++)
			{
        	mat[i][j]=vet[s];
            s++;
            printf("  %3d  |",mat[i][j]);
			} 
	}	
}