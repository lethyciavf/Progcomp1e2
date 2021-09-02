clc
clear
disp('Programa para calcular a formula dada');
%declaracao de variaveis
a=0;
b=0;
c=0;
d=0;
%entrada de valores
a = input('Digite o valor de a: ');
b = input('Digite o valor de b: ');
c = input('Digite o valor de c: ');
%calculo
d = (a-b)/((2*c-a)^2);
%answer
fprintf('O resultado eh: %0.3f\n', d);