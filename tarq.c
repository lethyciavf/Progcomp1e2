#include <stdio.h>

int main ()
{
FILE *fp;
char s[100];

printf ("Introduza o nome do arquivo: ");
scanf ("%s", &s);

 fp = fopen(s,"r");
 
if (fp==NULL) {
 printf ("Arquivo não encontrado \n");
 } 
else {
 printf ("Arquivo %s aberto com sucesso! \n", s);
 fclose (fp);
 }
}