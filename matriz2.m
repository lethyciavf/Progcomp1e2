%Programa para ler e mostrar uma matriz com entrada de valores;
clear
clc
m=0;
i=0;
j=0;
for i=[1:3]
    for j=[1:3]
        m(i,j)=input('entre com valor m: ');
    end;    
end;
disp('A matriz 3x3 eh:');
disp(m);