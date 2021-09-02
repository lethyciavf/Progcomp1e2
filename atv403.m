clear
clc
disp('Programa para verificar divisao');
%declaracao de variaveis
a=0;
b=0;
resto=0;
%entrada de valores
a = input('entre com o valor que sera dividido: ');
b = input('entre com o valor que sera o divisor: ');
%calculos e answer
resto = mod(a,b);
if resto == 0;
    disp('Divisao valida!');
else
    disp('Divisao invalida!');
end;