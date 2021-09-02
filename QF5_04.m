clear
clc
par=0;
imp=0;
num=0;
k=0; %quantidade fornecida pelo usuario
k=input('Quantos numeros serao lidos?');
    for i = [1:k];
    num=input('Entre com um valor inteiro: ');
    if mod(num,2) == 0;
        par = par+1;
    else
        imp = imp+1;
    end
end
fprintf ('Quantidade de numeros pares: %f\n', par);
fprintf ('Quantidade de numeros impares: %f\n', imp);