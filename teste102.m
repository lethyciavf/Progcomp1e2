clear
clc
disp ('Programa para converter Farenheit para Celsius');
%Declaracao de variaveis
far=0;
cel=0;
%entrada de valores
far = input('Qual valor de Farenheit deseja converter? ');
cel = (5/9*(far-32));
%answer
disp('Convertendo para Celsius:');
disp(cel);