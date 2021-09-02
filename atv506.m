// Programa: (Exercicio 05 da apostila 06).
// Objetivo: Exemplificar o uso da contagem dos numeros
// Data: Junho de 2012
// Descrição:Verificar se o numero é par ou ímpar
// Entrada: Leitura dos numeros inteiros
// Saída: Quantidade de numeros pares,quantidade de numeros impares

// Inicialização de variáveis
x=0;resto=mod(x,2) //Quantidade de numeros pares inicializarão com zero;
Quantidade de numeros ímpares inicializarão com zero;

// Anuncia a quantidade de numeros pares e impares
disp('Quantidade de numeros pares');
disp('Quantidade de numeros impares');
disp('Para encerrar, digite zero');

// Lê o primeiro numero inteiro
x=input('Digite o numero inteiro: ');

// Determina o primeiro numero
pares=x;
impares=x;

// Laço para contagem, executado apenas se x lido for diferente 0
while(x~=0)

// Identifica o numero par
if(resto==0)
// Incrementa o contador de numeros pares
Quantidade_pares=Quantidade_pares+1;
else
    // Incrementa o contador de numeros impares
Quantidade_impares=Quantidade_impares+1;
end // fim do if

// Lê o proximo numero
x=input('Digite um numero natural');

// Encerra o laço de forma que uma nova iteração ocorra apenas se a flag não for lida
end // fim do while

// Esta parte do código será alcançada apenas após a leitura da flag
// Os cálculos finais serão realizados apenas quando for lida, no mínimo, um numero.
if(x>0)

// Mostrar a quantidade de numeros pares e impares
disp('Quantidade de numeros pares =');
disp('Quantidade de numeros impares =');
