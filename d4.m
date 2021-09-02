clear
clc
a=0;
b=1;
s=0;
x=input('entre com o valor de X: ');
n=input('Entre com n (somatoria): ');
for contador=[1:n]
a=a+1;
b=b+1;
s=s+(a+x)/b;
disp(s);
end