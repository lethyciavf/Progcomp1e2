clc
clear
disp('Distancia entre dois pontos no plano cartesiano');
%declaracao de valores
x1=0;
x2=0;
y1=0;
y2=0;
soma=0;
d=0;
%entrada de valores
x1 = input('Digite o valor de X1: ');
y1 = input('Digite o valor de Y1: ');
x2 = input('Digite o valor de X2: ');
y2 = input('Digite o valor de Y2: ');
%calculos
soma = ((x1-x2)^2)+((y1-y2)^2);
d = sqrt(soma);
%answer
fprintf('A distancia entre os dois pontos eh: %f\n', d);