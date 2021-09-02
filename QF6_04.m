clear
clc
par=0;
imp=0;
k=1;
while k ~= 0;
    k=input('Entre com um valor inteiro: [Parar com 0]');
    if mod(k,2) == 0;
        par = par+1;
    else
        imp = imp+1;
    end
end
fprintf ('Quantidade de numeros pares: %f\n', par);
fprintf ('Quantidade de numeros impares: %f\n', imp);