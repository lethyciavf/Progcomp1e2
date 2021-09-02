clc
clear 
S=0;
P=1;
for i= 0 : 2
N=input('\nNumero: ');
S=S+N;
P=P*N;
end
disp('Soma= ' + string(S));
disp('Produto= ' + string(P));