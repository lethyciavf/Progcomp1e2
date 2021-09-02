clear
clc
neg=0;
pos=0;
num=1;
while num ~= 0;
    num=input('Entre com um valor real [zero para parar]: ');
    if num > 0;
        pos=pos+1;
    end
    if num < 0;
        neg=neg+1;
    end
end
fprintf('Os numeros positivos lidos totalizaram: %f0.1\n', pos);
fprintf('E os numeros negativos totalizaram: %f0.1\n', neg);