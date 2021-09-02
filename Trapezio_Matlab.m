clear
clc
disp('Calcule a area do Trapezio');
bmaior=input('Digite o valor da Base maior: ');
bmenor=input('Digite o valor da Base menor: ');
h=input('Digite o valor da Altura: ');
area=((bmaior+bmenor)*h)/2;
fprintf ('Area do Trapezio eh:%f\n ', area)