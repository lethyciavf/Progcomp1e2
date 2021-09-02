/**********************************************************************
* CALCULO DA DISTANCIA MINIMA EM UM GRAFO *
* *
* MAIN.C *
* *
**********************************************************************/

/* Inclusão de Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include
#include

/* Valor padrão para definir vértices não adjacentes */
#define INFINITO_POSITIVO 1000

/* FUNÇÃO PRINCIPAL DO PROGRAMA */
int main()
{

/* Variaveis para trabalhar com o grafo */
int origem, destino, peso, grafo[100][100];

/* Armazena a menor distancia de v0 a todos os outros i vértices de G. */
int dist[100];

/* Vetor booleano:
1 significa que o vetor está em C. 0 significa que não está */
int C[100];

/* Variáveis auxiliares para a execução de laços no programa. */
int i,j;

/* Variável Auxiliar, para definir o vértice de V(G) analisado */
int w = 0;

/* Variavel auxiliar para definir a posição do w escolhido dentro do vetor
de distâncias. */
int posicao_w;

/* Variavel posicao_wiliar para definir |V(C)| */
int tamanho_C = 0;

/**********************************************************************/
/**************** TRABALHANDO COM O GRAFO *************************/
/*********************************************************************/

/* Atribuindo um valor infinito à todas as posições da matriz, fazendo com que
caso alguma aresta não exista, não seja utilizada pelo algoritmo de menor
caminho */
for(i = 0; i < 100; i++){
for(j = 0; j < 100; j++){
grafo[i][j] = INFINITO_POSITIVO;
}
}

/*********************************************************************/
/*************************** INICIO DO ALGORITMO ********************/
/*********************************************************************/

/* Começar em v0 e colocar todas as distancias num vetor de distancias */
for(i = 0; i < 100; i++){ // “Laço 1”
dist[i] = grafo[0][i];
} // Fim “Laço 1”

C[0] = 1; /* C <– v0 */
dist[0] = 0; /* Dist{v0} <– 0 */

/* Enquanto C != V(G): Enquanto houverem vértices de G fora de C, o algoritmo
será executado. Noto que o algoritmo só funciona com grafos conexos. */
while (tamanho_C < 100) { /* “Enquanto 1″ */

/* Abaixo, incrementa-se C em um elemento. */
tamanho_C += 1;

/* Define em w um custo infinito. Se houver algum vértice com custo menor
que 1000 ele será escolhido. Caso contrário, v0 é isolado e o algoritmo
é encerrado. */
w = INFINITO_POSITIVO;

/* Escolher menor das distâncias em vet_dist tal que distância n esteja em C */
for(i = 0; i < 100; i++){ /* Laço 2 */ if (C[i] == 0 & w > dist[i]) {
w = dist[i];
posicao_w = i;
} /* fim se */
} /* fim Laço 2 */

C[posicao_w] = 1; /* setando o w escolhido como vértice visitado */

/* atualizando custos em dist i a partir do w escolhido */
for(i = 0; i < 100; i++){ /* Laço 3 */ 
	if (C[i] == 0) { 
		if (dist[i] > (w + grafo[posicao_w][i])) dist[i] = w + grafo[posicao_w][i]; //tem que ser em V(G) – C
		}
	} /* Fim Laço 3 */
} /* Fim Enquanto */


printf(” Origem Destino Distancia\n\n”);
for(i = 0; i < 100; i++){ // Laço 4 /* Como o algoritmo funciona para qualquer grafo com até 100 vértices, grafos pequenos terão muitas arestas e vértices marcados como “infinito”, ou naão existente. Para facilitar a visualização, vértices não existentes não são exibidos. */ 
if (dist[i] != 1000) printf(” v0 –> v%d %d \n”,i, dist[i]);
} /* Fim laço 4 */

printf(“\n”);

return 0;
}