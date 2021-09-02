clc
clear
disp('Programa para calcular o perimetro de um retangulo');
%declaracao de variaveis
b=0;
h=0;
per=0;
%calculos
b = input('Digite o valor da base do retangulo: ');
h = input('Digite o valor da altura do retangulo: ');
per = (2*h)+(2*b);
%answer
fprintf ('O perimetro calculado eh: %0.2f\n ', per);