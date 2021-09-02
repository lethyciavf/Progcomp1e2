clear
clc
termo=0;
n=0;
r=0;
k=1;
termo=input('Digite o primeiro termo: ');
r=input('Entre com a razao desejada: ');
n=input('Digite o numero de termos: ');
while k <= n;
    disp(termo);
    termo=termo+r;
    k=k+1;
end