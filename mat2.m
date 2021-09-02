clear
clc
aux = 0;
%Abrir um arquivo binario p/ escrita
arq = fopen('arquivo.bin','w');
x=0;
%Leia o numero de elementos do vetor A
a = input('Digite o tamanho do vetor: ');
x=a;
%Gerar o vetor A
for i = 1:a 
vet(i) = randi(1,100);
end

%Ordenar de forma crescente
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

for q = 1:a
    vetb(q)=vet(q);
end

%Elimene os elementos repetidos formando um novo vetor B
for m = 1:a
    if vetb(m)~=0
        for n = 2:a
            if m~=n && vetb(m)==vetb(n)
                vetb(m)=0;
            end
        end
    end
end

%Gravar o vetor B
fprintf(aqr,'\nVetor B\n');
for k = 1:a
    if vetb(k)~=0
    fprintf(arq,' %d \t',vetb(k));
    end
end
%Fechar o arquivo
fclose(arq)
fprintf('Arquivo Criado com Sucesso\n');

%Segunda parte
%Abrir o arquivo para leitura
arquivo = fopen('arquivo.bin','r');
%Ler os elementos do arquivo
A = fscanf(arquivo, '%d');
%Fechar o arquivo
fclose(arquivo)
%Mostrar os elementos
disp(A);