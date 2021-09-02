clear
clc
h=0;
a=5;
n=0;
n=input('Entre com o numero de termos que sera calculado: ');
for i = [1:n]
    h=h+(1/a);
    a=a+3;
end
fprintf ('Total: %f\n', h)