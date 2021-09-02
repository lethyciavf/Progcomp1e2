#include<stdio.h>
 #include<math.h>
 #include<stdlib.h>
 #include<time.h>
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
int mat[9][9],vet[64],s=0,i,j,x,y,z;
FILE*arq;
arq=fopen("Arranjo.txt", "w");
if(arq==NULL){
  printf("\nErro.");

  return(0);
  }
else{
srand(time(NULL));
fprintf(arq,"    <Numeros possiveis de 3 algarismos formados por 2,4,6,8> \n");
       for(x=200;x< 800;x=x+200)
        for(y=20;y< 80;y=y+20)
         for(z=2;z< 8;z=z+2)
          {
           vet[s]=x+y+z;
           s++;
          }
        s=0;
        for(i=0; i< 8; i++){
        fprintf(arq,"\n");
          for(j= 0; j< 8; j++){
             mat[i][j]=vet[s];
             s++;
             fprintf(arq,"  %3d  |",mat[i][j]);
             }
        }
    printf("\n\n");
    printf("Executado com sucesso!");
}
fclose(arq);
printf("\n");

}