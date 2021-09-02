clc
clear
a=1;
expoente=0;
base=0;
potencia=1;
base=input('Digite o valor da base: ');
expoente=input('Digite o valor do expoente: ');
while a<=expoente
    potencia=potencia*base;
    a=a+1;
end
fprintf('valor=%i\n',potencia)
