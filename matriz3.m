%Programa para ler e mostrar a soma de uma matriz com entrada de valores;
clear
clc
m=0;
i=0;
j=0;
soma=0;
for i=[1:3]
    for j=[1:3]
        m(i,j)=input('entre com valor m: ');
    end;    
end;
for i=[1:3]
    for j=[1:3]
        soma=soma+m(i,j);
    end;
end;
disp(m);
fprintf('a soma dos elementos eh: %0.2d\n',soma);