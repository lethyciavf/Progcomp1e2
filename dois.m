clc
clear
%declaracao de variaveis
v1=30;
v=0;
t=4.5;
d=0;
n=0;
contador=0;
%entrada de n
n = input('Digite o numero de posicoes desejadas: '); 
%calculos
d=v1*t;
T1 = table([(v1)],[(t)],[(d)], 'VariableName',{'V' 't' 'dist'});
disp(T1);
while n >= contador;
d = v*t;
v = (5+3+0+1+9+4)*rand;
contador = contador + 1;
T = table([(v)],[(t)],[(d)], 'VariableName',{'V' 't' 'dist'});
disp(T);
end