// Programa: (Exercicio 05 da apostila 06).
// Objetivo: Exemplificar o uso da contagem dos numeros
// Data: Junho de 2012
// Descri��o:Verificar se o numero � par ou �mpar
// Entrada: Leitura dos numeros inteiros
// Sa�da: Quantidade de numeros pares,quantidade de numeros impares

// Inicializa��o de vari�veis
x=0;resto=mod(x,2) //Quantidade de numeros pares inicializar�o com zero;
Quantidade de numeros �mpares inicializar�o com zero;

// Anuncia a quantidade de numeros pares e impares
disp('Quantidade de numeros pares');
disp('Quantidade de numeros impares');
disp('Para encerrar, digite zero');

// L� o primeiro numero inteiro
x=input('Digite o numero inteiro: ');

// Determina o primeiro numero
pares=x;
impares=x;

// La�o para contagem, executado apenas se x lido for diferente 0
while(x~=0)

// Identifica o numero par
if(resto==0)
// Incrementa o contador de numeros pares
Quantidade_pares=Quantidade_pares+1;
else
    // Incrementa o contador de numeros impares
Quantidade_impares=Quantidade_impares+1;
end // fim do if

// L� o proximo numero
x=input('Digite um numero natural');

// Encerra o la�o de forma que uma nova itera��o ocorra apenas se a flag n�o for lida
end // fim do while

// Esta parte do c�digo ser� alcan�ada apenas ap�s a leitura da flag
// Os c�lculos finais ser�o realizados apenas quando for lida, no m�nimo, um numero.
if(x>0)

// Mostrar a quantidade de numeros pares e impares
disp('Quantidade de numeros pares =');
disp('Quantidade de numeros impares =');
