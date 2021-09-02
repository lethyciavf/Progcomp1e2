clc
clear
a=0;
x=0;
contador=0;
media=0;
menor=99999;
maior=0;
x=input('Digite o primeiro numero (~= 0) = ');
soma=x;
while x~=0;
  x=input('Digite outro numero = '); 
  if maior<x;
          maior=x;
      soma=soma+x;
  else
      if x~=0 & x<menor
      menor=x;
      soma=soma+x;2
      end
  end
  contador=contador+1;
end
media=soma/contador,
a=maior - menor;