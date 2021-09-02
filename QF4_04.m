clear
clc
par=0;
imp=0;
num=0;
for i = [1:10];
    num=input('Entre com um valor inteiro: ');
    if mod(num,2) == 0;
        par = par+1;
    else
        imp = imp+1;
    end
end
fprintf ('Quantidade de numeros pares: %f\n', par);
fprintf ('Quantidade de numeros impares: %f\n', imp);