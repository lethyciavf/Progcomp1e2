clear
clc
d=input('');
disp('Programa para calcular areas diversas');
disp('Se voce deseja calcular a area do triangulo, digite 1, do quadrado, 2, para o circulo, 3');
resp=input('1,2 ou 3?');
if (resp==1);
    base=input('Digite o valor da base do Triangulo: ');
    alt=input('Digite o valor da altura: ');
    area1=(base*alt)/2;
    fprintf ('Area do Triangulo eh:%f\n ', area1);
elseif (resp==2);
    lado=input('Digite o valor da lado do Quadrado: ');
    area2=(lado*lado);
    fprintf ('Area do Quadrado eh:%f\n ', area2);
elseif (resp==3);
    raio=input('Digite o valor do raio do Circulo: ');
    area3=pi*(raio^2);
    fprintf ('Area do Circulo eh:%f\n ', area3);
end;