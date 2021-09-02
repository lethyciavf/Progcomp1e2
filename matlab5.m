clear
clc
aux = 0;
x=0;
a = input('Digite o tamanho do vetor: ');
x=a;
for i = 1:a 
vet(i) = randi(1,100);
end
fprintf('\nVetor criado\n')
for i = 1:a
    fprintf(' %d \t',vet(i));
end
fprintf('\n');
while x>1
for y = 1:a-1
    if vet(y) < vet(y+1)
        aux = vet(y);
        vet(y)=vet(y+1);
        vet(y+1)=aux;
    end
end
x = x-1;
end
    fprintf('\nVetor Ordenado\n');
for k = 1:a
    fprintf(' %d \t',vet(k));
end
fprintf('\n');
