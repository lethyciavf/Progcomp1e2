algoritmo() {
// declaracao das variaveis

declare BIN: cadeia;	// armazena a cadeia binaria informada
declare B2: inteiro;	// armazena o numerico na base 2
declare DEC: inteiro;	// representacao decimal de BIN
declare N: inteiro;		// o valor de cada um dos digitos da cadeia binaria
declare AUX1: inteiro; 	// comprimento da cadeia binaria 
declareAUX2:cadeia; 	//cada um dos digitos da cadeia binaria BIN 
declare I: inteiro; 	// o expoente da base

// inicializacao da condicao de contorno 
B2 := 1;

repita ateque ( B2 == 0 ) {
	// leitura do numero na base 2
	leia ( "informe um numero na base 2: ", BIN ); 
	B2 := CadeiaParaInteiro(BIN);

se ( B2 <> 0 ) {
	AUX1 := Comprimento (BIN);

// descobre quantos digitos tem na cadeia

	DEC := 0; // inicializa a variavel DEC com zero 
	I := 0; // expoente inicial da base (2)

repita ateque ( AUX1 == 0 ) {

	AUX2 := Subcadeia ( BIN, AUX1, 1 ); 
	N := CadeiaParaInteiro ( AUX2 ); 
	DEC := DEC + N * (2^I);
	AUX1 := AUX1 - 1;
	I := I + 1; }
	escreva ( "Base 2: ", BIN, " Base 10: ", DEC ); }
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int b2, dec, n, aux1, i;
	//declaracao de  aux2 e bin
	b2 = 1;
	
	while (b2 != 0) {
	printf("Entre com um valor na base 2: \n");
	printf("[Condição de parada, digite 0]");
	scanf("%i\n",&bin);
	
	b2 = bin;
	aux1 = bin;
	dec = 0;
	i = 0;
	while (aux1 != 0) {
	aux2 = 
	

}