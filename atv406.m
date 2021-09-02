clc
clear
%Programa para determinar a quantidade de numeros pares e impares
QUANT_PARES=0;
QUANT_IMPARES=0;
disp('Contagem de números inteiros pares e ímpares');
disp('Para encerrar, digite zero');
X=input('Digite um número inteiro: ');
while(X~=0)
     RESTO=mod(X,2);
if( RESTO==0 )
     QUANT_PARES=QUANT_PARES+1;
else
     QUANT_IMPARES=QUANT_IMPARES+1;
end
     X=input('Digite um número natural: ');
end
disp('Quantidade de números pares = ' +string(QUANT_PARES) )
disp('Quantidade de números ímpares = ' + string(QUANT_IMPARES) )