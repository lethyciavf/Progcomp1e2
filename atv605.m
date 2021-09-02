clc
clear
a=0;
b=0;
fatorial=0;
a=input('Digite o numero que você quer fatorar:');
b=a;
while a >= 2
   a=a-1;
   b=b*a;
end
fprintf('O valor do seu fatorial eh: %i\n',b)
