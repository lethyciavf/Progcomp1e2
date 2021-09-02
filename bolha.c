#include <stdio.h>
#include <stdlib.h>
void bolha(int n, int* v)
{
    int i,j,aux,temp;
    for(i = n-1;i>=1;i--)
    {
      for (j=0;j<i;j++)
        if (v[j] > v[j+1])
        {
          temp    = v[j];
          v[j]    = v[j+1];
          v[j+1]  = temp;
        }
      for (aux = 0;aux<n;aux++)
        printf("%4i",v[aux]);
      printf("\n");
    }
}
int main()
{
    int i,tamanho;
    int *v;
    srand(time(NULL));
    printf("Digite o tamanho do vetor : ");
    scanf("%i",&tamanho);
    v = (int*)malloc(tamanho*sizeof(int));
    for(i = 0;i <tamanho;i++)
      v[i] = rand() % 101;
    printf("Vetor criado\n\n");
    for (i = 0;i < tamanho;i++)
      printf("%i ",v[i]);
    printf("\n\n\nOrdenando o vetor\n\n");
    bolha(tamanho,v);
    printf("\n\nVetor ordenado de tamanho %d\n\n",tamanho);
    for (i=0;i<tamanho;i++)
      printf("%i ",v[i]);
    printf("\n");
    return 0;
}
