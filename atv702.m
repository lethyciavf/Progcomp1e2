clc
clear
disp('Dona Hipotenusa e seus dois Catetos');
%declaracao de variaveis
b=0;
c=0;
cats=0;  %catetos
h=0;
%entrada de valores
disp('Entre com os valores dos catetos');
b = input('Digite o valor do cateto oposto: ');
c = input('Digite o valor do cateto adjacente: ');
%calculos
cats = (b^2)+(c^2);
h = sqrt(cats);
%answer
fprintf('O valor da Hipotenusa para os dados catetos eh: %0.2f\n',h);