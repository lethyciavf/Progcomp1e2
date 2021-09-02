clear
clc
aux = 0;
x=0;
d = input('');
a = input('Digite o tamanho do vetor: ');
x=a;
for i = 1:a 
vet(i) = randi(1,60);
end
fprintf('\nVetor criado\n')
for i = 1:a
    fprintf(' %d \t',vet(i));
end
fprintf('\n');
while x>1
for y = 1:a-1
    if vet(y) > vet(y+1)
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

for q = 1:a
    vetb(q)=vet(q);
end

for m = 1:a
    if vetb(m)~=0
        for n = 2:a
            if m~=n && vetb(m)==vetb(n)
                vetb(m)=0;
            end
        end
    end
end

fprintf('\nVetor B\n');
for k = 1:a
    if vetb(k)~=0
    fprintf(' %d \t',vetb(k));
    end
end
fprintf('\n');
