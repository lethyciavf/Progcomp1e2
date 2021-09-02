clc
clear
%Programa para Calcular o valor da soma dos vinte termos da serie:1/99 + 98/2 + 3/97 + ...
soma=0;
a=1;
b=99;
c=98;
d=2;
termo1=0;
termo2=0;
format rat
for contador=0:19
    if mod (contador,2)==0
        termo1=a\b
        fprintf('%i\t',termo1)
        soma=soma+termo1;
        fprintf('%i\n',soma)
        a=a+2;
        b=b-2;
    else
        termo2=c\b
        fprintf('%\t',termo2)
        soma=soma+termo2;
        fprintf('%i\n',termo2)
        c=c-2;
        d=d+2;
    end
end
fprintf('soma=%i\t',soma)