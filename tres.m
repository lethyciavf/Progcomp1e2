clc
clear
%declaracao de variaveis
v=0;
a=2.5;
t=1;
d=0;
n=0;
contador=0;
contador1=0;
%entrada de n
n = input('Digite o numero de repeticoes desejadas: '); 
while n > contador;  
   contador = contador + 1;
   if contador1 < 3;
       contador1 = contador1 + 1;
   end
   if contador1 == 3;
    t = t*3.5;
    contador1 = 0;
   end
   d = d+(v*t)+((0.5*a)*(t^2));
   v=v+2;
   T = table([(contador)],[(v)],[(t)],[(d)], 'VariableName',{'Interacao' 'V' 't' 'dist'});
   disp(T);
end