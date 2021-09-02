clc
clear
disp('Programa para calcular a area de um circulo');
%declaracao de variaveis
raio=0;
area=0;
%calculos
raio = input('Digite o valor do raio do Circulo: ');
area = pi*(raio^2);
%answer
fprintf ('Area calculada eh: %0.2f\n ', area);