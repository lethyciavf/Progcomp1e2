clc
clear
a=5;
b=3;
for i = [0:3];
    a=a+b;
    b=b+1;
    fprintf('Valor de a =%i\t',a)
    fprintf('Valor de b =%i\t',b)
    fprintf('Valor de i =%i\n',i)
end