clc
clear
%declaracao de variaveis
num=0;
dobro=0;
quad=0;
sqr=0;
met=0;
rest=0;
divis=2;
%Calculos
num = input('entre com o numero que deseja usar para os seguintes calculos: ');
dobro = num*2;
quad = num^2;
sqr = sqrt(num);
met = num/2;
rest = mod(num,divis);
%answer
fprintf('o dobro do numero eh: %0.2f\n',dobro);
fprintf('o quadrado do numero eh: %0.2f\n',quad);
fprintf('A raiz quadrada eh: %0.2f\n',sqr);
fprintf('A metade eh: %0.2f\n',met);
fprintf('O resto da divisao por 2 eh: %0.2f\n',rest);