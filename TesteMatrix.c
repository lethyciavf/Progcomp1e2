//
//  TesteMatrix.c
//  
//
//  Created by Lethycia Venturini Ferreira on 9/3/15.
//
//

#include "TesteMatrix.h"
#include <stdio.h>

int main (void)
{
    {
        int (Matriz[3][3]);
        int i, j;
        for (i=0; i<3; i++)
            for (j=0; j<3; j++)
                Matriz[i][j] = 2;
    }
    {
        int (Matriz[3][3]);
        for (i=0; i<3; i++)
            for (j=0; j<3; j++)
                printf ("%d", Matriz[i][j]);
    }
}