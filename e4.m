clear
clc
a=1;
b=1;
s=0;
n=input('Quantas vezes deseja somar? ');
for contador = [1:n];
a=a*2;
s=(s*b)+(1/a);
b=-1*b;
disp(s);
end