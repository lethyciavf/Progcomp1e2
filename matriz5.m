%Programa para ler e mostrar a soma de uma matriz com entrada de valores;
clear
clc
M=0;
i=0;
j=0;
soma=0;
m=0;
n=0;
m=input('entre com o valor desejado de linhas: ');
n=input('entre com o valor desejado de colunas: ');
for i=[1:m]
    for j=[1:n]
        %M(i,j)=input('entre com valor M: ');
        M(i,j)=rand;
    end;    
end;
for i=[1:m]
    for j=[1:n]
        soma=soma+M(i,j);
    end;
end;
disp(M);
fprintf('a soma dos elementos eh: %0.2d\n',soma);