clear
clc
%declaracao de valores
menor=200;
maior=0;
k=0;   %contador
soma=0;
media=0;
idade=1;
while idade ~= 0
    idade=input('Digite a idade: ');
    if idade > 0;
    k=k+1;
    if idade < menor;
        menor=idade;
    end
    end
    soma=soma+idade;
    if idade > maior;
        maior=idade;
    end
end
media=soma/k;
fprintf ('a media da idade da turma eh: %f0.2\n', media);
fprintf ('a maior idade da turma eh: %f0.1\n', maior);
fprintf ('a menor idade da turma eh: %f0.1\n', menor);