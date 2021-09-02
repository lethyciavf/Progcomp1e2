clc
clear
%nothing here
disp ('programa para calcular barkara')
%declarando valores
a=0;
b=0;
c=0;
x1=0;
x2=0;
delta=0;
%entrada de valores
a = input('Digite o valor de a: ');
b = input('Digite o valor de b: ');
c = input('Digite o valor de c: ');
delta = (b^2)-(4*a*c);
%calculo final
x1=((-b)+sqrt(delta))/(2*a);
x2=((-b)-sqrt(delta))/(2*a);
%answer
if delta > 0;
    disp('Duas raizes reais');
    fprintf ('Valores das raizes:%0.2f\n', x1 ,x2)
    elseif delta < 0;
        disp('Nao ha raiz');
        elseif delta == 0;
            disp('Ha apenas uma raiz');
            fprintf ('Valores da raizes:%0.2f\n', x1)
end;   