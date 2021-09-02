/*
-LISTA DE EXERCICIOS 01-
PROGRAMAÇÃO DE COMPUTADORES II

*/

 #include <stdio.h>
 #include <math.h>
 #include <stdlib.h>
 #include <conio.h>
 #include <time.h>
 #include <ctype.h>
 
int main( )
{                                                                                 
    int quest;                                                                              
    printf("\nDigite a questão desejada: ");                                               
    scanf("%d", &quest);                                                                    
    switch (quest);
{                                                                        
    case 1: {
        int main( )
        {
        int n;
        printf("\nDigite o número de termos da serie fribonacci que deseja visualizar: ");
        scanf("%d",n);
        if(n<=0)
        {
            printf("Numero nao aceito.");
            return(0);
            printf("\n");
            }
        else
        {
            int x,y,k,j;
            k=0;
            x=0;
            y=1;
            printf("%d",x);
            printf("\n");
            printf("%d",y);
            printf("\n");
              while(k<=(n-3))
              {
                j=x+y;
                printf("%d",j);
                printf("\n");
                x=y;
                y=j;
                k++;
                }
            }
        printf("\n");
        system("pause");
        return(0);
        }
   }
    break;
    case 2: 
    {
        int f, c;
        for (j==0;j<lin;j++)
            for(k=0;k<col;k++)

          f=(9*c/5)+32;
}
    }
    getch ();
    system ("pause");
    return EXIT_SUCCESS;
}
