clear
clc
aux = 0;
%Abrir um arquivo texto p/ escrita
arq = fopen('arquivo.txt','w');
x=0;
%Ler o numero de elementos do vetor A
a = input('Digite o tamanho do vetor: ');
x=a;
%Gerar o vetor A
for i = 1:a 
vet(i) = randi(1,100);
end

%Ordenar de forma decrescente
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

%Gravar o vetor
fprintf(aqr,'\nVetor\n');
for k = 1:a
    fprintf(arq,' %d \t',vet(k));
    end
end
%Fechar o arquivo
fclose(arq)
fprintf('Arquivo Criado com Sucesso\n');

%Segunda parte
%Abrir o arquivo para leitura
arquivo = fopen('arquivo.txt','r');
%Ler os elementos do arquivo
A = fscanf(arquivo, '%d');
%Fechar o arquivo
fclose(arquivo)
%Mostrar os elementos
disp(A);