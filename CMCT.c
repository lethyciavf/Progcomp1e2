#include <stdio.h>
#include <stdlib.h>

int main ()
{

int falso = 0,
verdadeiro = 1,
P = 0,
i = 0; 
int origem, destino, c, NovaDA, Min, j, a, b, k, m;
int ExpA[6];
int DA[6];
int Ant[6];
int R[6][6];
int D[6][6] = 
{{0, 100, 15, 0, 0, 0},
{100, 0, 40, 180, 200, 0},
{15, 40, 0, 45, 90, 0},
{0, 180, 45, 0, 0, 101},
{0, 200, 90, 0, 0, 120},
{0, 0, 0, 101, 120, 0}};


printf("Informe a cidade origem: ");
scanf("%d", &origem);
printf("\nInforme a cidade destino: ");
scanf("%d", &destino);

while (destino > 5) {
printf("Digite um valor destino até 5! \n"); //para que o programa não saia sem respostas
destino = 0;
printf("\nInforme a cidade destino: ");
scanf("%d", &destino);
}


for (k=0;k<6;k++) {
ExpA[k] = falso;
DA[k]=10000;
}

/* 
Modificacao em relacao a versao para matlab
while (i < 6) {
    ExpA[i] = falso;
    DA[i] = 10000;
    i += 1;
}


for (m=0;m<6;m++){
printf("%d \t", DA[m]);}
printf("\n");*/

c = origem;
DA[c]=0;

while (c != destino /*&& c != 0 -> desnecessario em C */) {
    i = 0;
    while (i < 6){
       if (D[c][i] != 0 && ExpA[i] == falso) {
            NovaDA = DA[c]+D[c][i];
             /* DA[c] = NovaDA;*/
            if (NovaDA < DA[i]) {
                DA[i] = NovaDA;
                Ant[i] = c;
            }
        }
        ExpA[c]=verdadeiro;
        i = i + 1;
    }
    Min = 10000;
    i = 0;
    while (i < 6) {
        if (ExpA[i] == falso && DA[i] < Min) {
            Min = DA[i];
            c=i;
        }
        i = i + 1;
    }
}




for (a=0;a<6;a++){
 for (b=0;b<6;b++){
  R[a][b]=0;
  }
}

// for (m=0;m<6;m++){
//printf("%d \t", DA[m]);}
//printf("\n");

i=5;

/*
Isso aqui eh teste pra ver o que esta chegando nos vetores
for (m=0;m<6;m++){
printf("%d \t", DA[m]);}
printf("\n");
for (m=0;m<6;m++){
printf("%d \t", ExpA[m]);}
printf("\n %d",NovaDA);*/


if (c == destino) {
    printf("\nDescricao do caminho minimo: \n");
    R[0][5] = c;
    P = P + DA[c];
    while (c != origem) {
        i = i-1;
        c = Ant[c];
        R[0][i]=c;
    }
    if (origem == 0) {  // sem esse laço, caso o usuario digitasse origem 0,
    printf("%d \t", origem);   //a origem são seria mostrada.
    for (j=1;j<6;j++) {
        if (R[0][j] != 0) {
          printf("%d \t", R[0][j]);
        }
    }
 }
    else {
    for (j=0;j<6;j++) {
        if (R[0][j] != 0) {
          printf("%d \t", R[0][j]);
        }
    }
}
    printf("\nO custo para chegar da cidade %d ate a cidade %d eh ", origem, destino);
    printf("%d \n",P);
}
}