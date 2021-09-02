clc
clear
%Programa para calcular o valor de H, sendo ele obtido da seguinte maneira:
%H = 3/9 + 10/4 + 5/11 + 12/6 + ...
H=0;
a=3;
b=9;
c=10;
d=4;
termo1=0;
termo2=0;
i=input('digite a quantidade de termos=');
format rat
for contador=1:i;
    termo1=a/b;
    termo2=c/d;
    H=termo1+termo2;
    a=a+2;
    b=b+2;
    c=c+2;
    d=d+2;
    
end

fprintf('H=%f\t',H)