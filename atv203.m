clc
clear
disp('Programa para verificar se eh um triangulo ou nao');
%declaracao de variaveis
a=0;
b=0;
c=0;
%entrada de valores
a = input('Digite o valor de um dos lados do triangulo (a): ');
b = input('Digite o valor de outro lado do triangulo (b): ');
c = input('Digite o valor do ultimo lado do triangulo (c): ');
%verificacao e answer
if (a<(b+c))&&(b<(a+c))&&(c<(a+b));
    disp('Eh um triangulo!');
    if a == b && b == c;
        disp('E eh equilatero!');
    elseif a == b || a == c || b == c;
            disp('E eh isosceles!');
    else
                disp('E eh escaleno!'); 
    end;            
else
    disp('Nao eh um triangulo :( ');
end;